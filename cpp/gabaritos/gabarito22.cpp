#include <iostream>
#include <stdexcept>

int main() {
    try {
        double a, b;
        std::cout << "Digite o primeiro número: ";
        std::cin >> a;
        std::cout << "Digite o segundo número: ";
        std::cin >> b;
        if (b == 0) {
            throw std::runtime_error("Divisão por zero");
        }
        double resultado = a / b;
        std::cout << "Resultado: " << resultado << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }
    return 0;
}