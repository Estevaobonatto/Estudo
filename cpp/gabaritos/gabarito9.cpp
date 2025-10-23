#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    size_t n = nums.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                std::swap(nums[j], nums[j + 1]);
            }
        }
    }
    std::cout << "Lista ordenada: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}