#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Digite um número positivo: ";
    std::cin >> x;
    std::cout << "Raiz quadrada: " << std::sqrt(x) << std::endl;
    std::cout << "Seno: " << std::sin(x) << std::endl;
    std::cout << "Logaritmo natural: " << std::log(x) << std::endl;
    return 0;
}