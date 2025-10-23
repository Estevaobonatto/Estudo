#include <iostream>
#include <random>
#include <ctime>

int main() {
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> dist(1, 100);
    int numero_secreto = dist(gen);
    int palpite = 0;
    while (palpite != numero_secreto) {
        std::cout << "Adivinhe o número (1-100): ";
        std::cin >> palpite;
        if (palpite < numero_secreto) {
            std::cout << "Maior!" << std::endl;
        } else if (palpite > numero_secreto) {
            std::cout << "Menor!" << std::endl;
        }
    }
    std::cout << "Acertou!" << std::endl;
    return 0;
}