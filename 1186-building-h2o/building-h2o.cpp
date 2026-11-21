class H2O {
private:
    mutex mtx;
    condition_variable cv;
    int h_count = 0;

public:
    H2O() {}

    void hydrogen(function<void()> releaseHydrogen) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]() { return h_count < 2; });
        releaseHydrogen();
        h_count++;
        cv.notify_all();
    }

    void oxygen(function<void()> releaseOxygen) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]() { return h_count == 2; });
        releaseOxygen();
        h_count = 0;
        cv.notify_all();
    }
};
