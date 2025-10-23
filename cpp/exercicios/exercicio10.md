# Exercício 10: Média de um Vetor

**Objetivo:** Escrever um programa que calcule a média aritmética dos números em um vetor.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio10.cpp`).
- Defina um vetor com números (ex: std::vector<int> nums = {10, 20, 30, 40, 50};).
- Calcule a soma de todos os elementos e divida pelo número de elementos.
- Imprima a média.

**Dicas:**
- Use um loop `for` para somar.
- Ou `std::accumulate(nums.begin(), nums.end(), 0.0) / nums.size()`.
- Inclua `<numeric>` para accumulate.

**O que aprender:**
- Funções da STL úteis.
- Cálculos matemáticos simples com vetores.