#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    int soma = std::accumulate(nums.begin(), nums.end(), 0);
    double media = static_cast<double>(soma) / nums.size();
    std::cout << "A média é: " << media << std::endl;
    return 0;
}