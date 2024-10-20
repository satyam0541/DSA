#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;

    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    Solution sol;
    int newLength = sol.removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
