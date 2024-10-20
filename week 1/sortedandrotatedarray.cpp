#include <iostream>
#include <vector>

class Solution {
public:
    bool check(std::vector<int>& nums) {
        int count = 0, n = nums.size();
  
        for(int i = 1; i < n; i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
        }
        if(nums[n - 1] > nums[0]){
            count++;
        }
  
        if(count <= 1) {
            return true;
        }
        return false;
    }
};

int main() {
    std::vector<int> nums = {3, 4, 5, 6, 2,3}; // Example input
    Solution sol;
    if(sol.check(nums)) {
        std::cout << "The array is sorted and rotated." << std::endl;
    } else {
        std::cout << "The array is not sorted and rotated." << std::endl;
    }
    return 0;
}
