# Exercício 21: Ler e Escrever Arquivo

**Objetivo:** Escrever um programa que leia um arquivo de texto, conte as linhas, e escreva o resultado em outro arquivo.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio21.cpp`).
- Crie um arquivo de entrada com algumas linhas de texto.
- Leia o arquivo, conte as linhas.
- Escreva o número de linhas em um arquivo de saída.

**Dicas:**
- Inclua `<fstream>`, `<string>`.
- Use `std::ifstream in("entrada.txt"); std::string line; int count = 0; while (std::getline(in, line)) count++;`
- Escreva com `std::ofstream out("saida.txt"); out << count << std::endl;`

**O que aprender:**
- Manipulação de arquivos em C++.
- Streams de entrada e saída.