class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    }

    string sortVowels(string s) {
        string vowels = "";
        for (char c : s) {
            if (isVowel(c)) {
                vowels += c;
            }
        }
        sort(vowels.begin(), vowels.end());
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[j++];
            }
        }
        return s;
    }
};
