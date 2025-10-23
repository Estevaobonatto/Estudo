#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);
    std::string normalizada;
    for (char c : str) {
        if (!std::isspace(c)) {
            normalizada += std::tolower(c);
        }
    }
    std::string reversa = normalizada;
    std::reverse(reversa.begin(), reversa.end());
    if (normalizada == reversa) {
        std::cout << "É um palíndromo." << std::endl;
    } else {
        std::cout << "Não é um palíndromo." << std::endl;
    }
    return 0;
}