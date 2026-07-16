#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // If we're on a descending slope, the peak is at mid or to the left
            if (nums[mid] > nums[mid + 1]) {
                end = mid;
            }
            // Otherwise, we're on an ascending slope, so the peak is to the right
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1};

    Solution obj;
    int peakIndex = obj.findPeakElement(nums);

    cout << "Peak Element Index: " << peakIndex << endl;
    cout << "Peak Element Value: " << nums[peakIndex] << endl;

    return 0;
}