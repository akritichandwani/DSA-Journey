#include <iostream>
#include <vector>

using namespace std;

// LeetCode 1 - Two Sum
// Approach: Brute Force
// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}