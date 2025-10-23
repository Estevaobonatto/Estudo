#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Criar arquivo de entrada
    std::ofstream entrada("entrada.txt");
    entrada << "Linha 1\nLinha 2\nLinha 3\n";
    entrada.close();

    // Ler e contar
    std::ifstream in("entrada.txt");
    std::string line;
    int count = 0;
    while (std::getline(in, line)) {
        ++count;
    }
    in.close();

    // Escrever saída
    std::ofstream saida("saida.txt");
    saida << "Número de linhas: " << count << std::endl;
    saida.close();

    std::cout << "Arquivo processado." << std::endl;
    return 0;
}