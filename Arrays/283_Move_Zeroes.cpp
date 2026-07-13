#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;

        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;
    obj.moveZeroes(nums);

    cout << "Output: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}