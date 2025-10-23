#include <iostream>

double soma(double a, double b) { return a + b; }
double subtracao(double a, double b) { return a - b; }
double multiplicacao(double a, double b) { return a * b; }
double divisao(double a, double b) { return b != 0 ? a / b : 0; } // erro

int main() {
    char op;
    double a, b;
    std::cout << "Digite operação (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Primeiro número: ";
    std::cin >> a;
    std::cout << "Segundo número: ";
    std::cin >> b;

    if (op == '+') {
        std::cout << "Resultado: " << soma(a, b) << std::endl;
    } else if (op == '-') {
        std::cout << "Resultado: " << subtracao(a, b) << std::endl;
    } else if (op == '*') {
        std::cout << "Resultado: " << multiplicacao(a, b) << std::endl;
    } else if (op == '/') {
        if (b != 0) {
            std::cout << "Resultado: " << divisao(a, b) << std::endl;
        } else {
            std::cout << "Erro: divisão por zero" << std::endl;
        }
    } else {
        std::cout << "Operação inválida" << std::endl;
    }
    return 0;
}