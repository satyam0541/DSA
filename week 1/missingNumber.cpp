#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n * (n + 1) / 2;

        int sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum2 += nums[i]; 
        }
        
        return sum1 - sum2;
    }
};

int main() {
    vector<int> nums = {3,0,1,2,5,6,4}; // Example input
    Solution solution;
    cout << "Missing number is: " << solution.missingNumber(nums) << endl;
    return 0;
}
