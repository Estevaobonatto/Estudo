#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main() {
    std::string frase = "o rato roeu a roupa do rei de roma";
    std::stringstream ss(frase);
    std::string palavra;
    std::map<std::string, int> contagem;
    while (ss >> palavra) {
        contagem[palavra]++;
    }
    for (const auto& par : contagem) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
    return 0;
}