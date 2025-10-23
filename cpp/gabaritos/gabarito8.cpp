#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);
    std::string invertida = str;
    std::reverse(invertida.begin(), invertida.end());
    std::cout << "String invertida: " << invertida << std::endl;
    return 0;
}