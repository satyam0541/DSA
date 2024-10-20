#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = -1, second = -1;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (max < arr[i])
                max = arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > second && arr[i] < max) {
                second = arr[i];
            }
        }
        return second;
    }
};

int main() {
    vector<int> arr = {3, 1,9, 4,5,5, 4, 5, 5, 2};
    Solution sol;
    cout << "The second largest element is: " << sol.getSecondLargest(arr) << endl;
    return 0;
}
