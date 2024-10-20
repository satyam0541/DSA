#include <iostream>
#include <vector>

class Solution {
  public:
    int largest(std::vector<int> &arr) {
        int max = arr[0];  // Initialize max with the first element of the array
        int n = arr.size();

        for (int i = 1; i < n; i++) {  // Start loop from the second element
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {10, 200, 4, 45, 99};  // Example input
    int result = solution.largest(arr);
    std::cout << "The largest element is: " << result << std::endl;
    return 0;
}
