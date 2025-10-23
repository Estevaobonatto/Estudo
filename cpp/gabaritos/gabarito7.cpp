#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    if (n <= 1) {
        std::cout << "Não é primo" << std::endl;
    } else {
        bool primo = true;
        for (int i = 2; i <= static_cast<int>(std::sqrt(n)) + 1; ++i) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            std::cout << "É primo" << std::endl;
        } else {
            std::cout << "Não é primo" << std::endl;
        }
    }
    return 0;
}