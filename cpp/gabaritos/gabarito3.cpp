#include <iostream>

int main() {
    int num;
    std::cout << "Digite um número: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Par" << std::endl;
    } else {
        std::cout << "Ímpar" << std::endl;
    }
    return 0;
}