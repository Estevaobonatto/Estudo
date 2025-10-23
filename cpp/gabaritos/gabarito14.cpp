#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);
    int vogais = 0;
    std::string vogais_str = "aeiou";
    for (char c : str) {
        if (vogais_str.find(std::tolower(c)) != std::string::npos) {
            ++vogais;
        }
    }
    std::cout << "Número de vogais: " << vogais << std::endl;
    return 0;
}