# Exercício 19: Inverter Vetor Recursivamente

**Objetivo:** Escrever um programa que inverta um vetor usando recursão.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio19.cpp`).
- Defina uma função recursiva para inverter o vetor.
- Teste com um vetor exemplo e imprima o resultado.

**Dicas:**
- Função: void inverter(std::vector<int>& lst, size_t start, size_t end) { if (start >= end) return; std::swap(lst[start], lst[end]); inverter(lst, start + 1, end - 1); }
- Construa a inversão passo a passo.

**O que aprender:**
- Recursão para manipulação de vetores.
- Troca de elementos.