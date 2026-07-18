#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to calculate the GCD using Euclid's Algorithm
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];

        for (int i = 0; i < nums.size(); i++) {
           if (nums[i] < minimum) {
            minimum = nums[i];
    }

            if (nums[i] > maximum) {
             maximum = nums[i];
    }
}
        return gcd(minimum, maximum);
    }
};

int main() {
    vector<int> nums = {2, 5, 6, 9, 10};

    Solution obj;
    cout << "GCD of Minimum and Maximum Elements: "
         << obj.findGCD(nums) << endl;

    return 0;
}