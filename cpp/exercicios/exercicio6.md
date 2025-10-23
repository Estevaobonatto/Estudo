# Exercício 6: Contar Palavras

**Objetivo:** Escrever um programa que conte a frequência de cada palavra em uma frase usando mapas.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio6.cpp`).
- Defina uma string com uma frase (ex: "o rato roeu a roupa do rei de roma").
- Divida a frase em palavras usando `stringstream`.
- Use um `std::map<std::string, int>` para contar quantas vezes cada palavra aparece.
- Imprima o mapa com as contagens.

**Dicas:**
- Inclua `<map>`, `<string>`, `<sstream>`.
- Use `std::stringstream ss(frase); std::string palavra; while (ss >> palavra) { ... }`
- Para cada palavra, `contagem[palavra]++`.

**O que aprender:**
- Estruturas de dados: mapas em C++.
- Manipulação de strings e streams.
- Lógica de contagem e mapeamento.