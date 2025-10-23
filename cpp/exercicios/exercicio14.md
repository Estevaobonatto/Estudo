# Exercício 14: Contar Vogais

**Objetivo:** Escrever um programa que conte quantas vogais (a, e, i, o, u) há em uma string fornecida pelo usuário, ignorando maiúsculas/minúsculas.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio14.cpp`).
- Solicite uma string ao usuário.
- Conte as vogais usando um loop.
- Imprima o total de vogais.

**Dicas:**
- Converta para minúsculas: `std::tolower`.
- Use `if (str[i] == 'a' || ...)` ou `std::string vogais = "aeiou"; if (vogais.find(tolower(str[i])) != std::string::npos)`
- Inclua `<cctype>` para tolower.

**O que aprender:**
- Iteração sobre strings.
- Contagem condicional.