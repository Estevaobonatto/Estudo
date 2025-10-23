# Exercício 26: Comparar Buscas

**Objetivo:** Implementar busca linear e binária, medir tempo para vetores grandes.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio26.cpp`).
- Gere um vetor grande ordenado.
- Implemente ambas as buscas.
- Use <chrono> para medir e comparar.

**Dicas:**
- Inclua `<chrono>`.
- auto start = std::chrono::high_resolution_clock::now(); ... ; auto end = ...; auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
- Busca linear: loop simples.
- Binária: como exercício 16.

**O que aprender:**
- Eficiência de algoritmos.
- Medição de performance.