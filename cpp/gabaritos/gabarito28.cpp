#include <iostream>
#include <string>
#include <regex>

bool validar_email(const std::string& email) {
    std::regex pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)");  
    return std::regex_match(email, pattern);
}

int main() {
    std::string email;
    std::cout << "Digite um email: ";
    std::getline(std::cin, email);
    if (validar_email(email)) {
        std::cout << "Email válido" << std::endl;
    } else {
        std::cout << "Email inválido" << std::endl;
    }
    return 0;
}