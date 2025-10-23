#include <iostream>

int main() {
    int nums[] = {3, 1, 4, 1, 5, 9, 2};
    int tamanho = sizeof(nums) / sizeof(nums[0]);
    int maximo = nums[0];
    for (int i = 1; i < tamanho; i++) {
        if (nums[i] > maximo) {
            maximo = nums[i];
        }
    }
    std::cout << "O maior número é: " << maximo << std::endl;
    return 0;
}