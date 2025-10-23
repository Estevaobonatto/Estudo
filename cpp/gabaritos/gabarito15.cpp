#include <iostream>

int main() {
    int a, b;
    std::cout << "Digite o primeiro número: ";
    std::cin >> a;
    std::cout << "Digite o segundo número: ";
    std::cin >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    std::cout << "MDC: " << a << std::endl;
    return 0;
}