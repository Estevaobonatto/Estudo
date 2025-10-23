# Exercício 18: Soma de Elementos em um Vetor

**Objetivo:** Escrever um programa que calcule a soma de todos os elementos em um vetor de números usando recursão.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio18.cpp`).
- Defina uma função recursiva que some os elementos do vetor.
- Teste com um vetor exemplo e imprima o resultado.

**Dicas:**
- Função: int soma_recursiva(const std::vector<int>& lst, size_t index) { if (index == lst.size()) return 0; return lst[index] + soma_recursiva(lst, index + 1); }
- Evite loops, use recursão.

**O que aprender:**
- Recursão em C++.
- Casos base e recursivos.