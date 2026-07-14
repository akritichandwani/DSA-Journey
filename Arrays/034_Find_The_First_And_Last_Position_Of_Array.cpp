#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOcc(nums, target), lastOcc(nums, target)};
    }

private:
    int firstOcc(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;      // Search in the left half
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int lastOcc(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;    // Search in the right half
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution obj;
    vector<int> result = obj.searchRange(nums, target);

    cout << "First and Last Position: ["
         << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}