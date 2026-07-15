#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            // Shrink the window until it contains unique characters
            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main() {
    string s = "abcabcbb";

    Solution obj;
    cout << "Length of the longest substring: "
         << obj.lengthOfLongestSubstring(s) << endl;

    return 0;
}