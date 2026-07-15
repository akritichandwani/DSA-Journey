#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths differ, they cannot be anagrams
        if (s.size() != t.size()) {
            return false;
        }

        int freq[26] = {0};

        // Count frequency of characters in the first string
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Subtract frequency using the second string
        for (char ch : t) {
            freq[ch - 'a']--;
        }

        // If any frequency is not zero, strings are not anagrams
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string s = "anagram";
    string t = "nagaram";

    Solution obj;

    if (obj.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}