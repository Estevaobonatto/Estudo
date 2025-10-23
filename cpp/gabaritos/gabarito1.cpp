#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    int soma = num1 + num2;
    std::cout << "A soma é: " << soma << std::endl;
    return 0;
}