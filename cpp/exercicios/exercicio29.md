# Exercício 29: Funções Lambda e Algoritmos

**Objetivo:** Usar lambda e algoritmos da STL para transformar um vetor de números ao quadrado.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio29.cpp`).
- Defina um vetor de números.
- Use std::transform com lambda para elevar ao quadrado.
- Imprima o novo vetor.

**Dicas:**
- Inclua `<algorithm>`.
- std::vector<int> quadrados(nums.size()); std::transform(nums.begin(), nums.end(), quadrados.begin(), [](int x) { return x * x; });
- Lambda para funções anônimas.

**O que aprender:**
- Programação funcional em C++.
- Algoritmos da STL.