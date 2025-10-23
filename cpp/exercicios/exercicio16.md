# Exercício 16: Busca Binária

**Objetivo:** Escrever um programa que implemente a busca binária para encontrar um elemento em um vetor ordenado.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio16.cpp`).
- Defina um vetor ordenado (ex: std::vector<int> nums = {1, 3, 5, 7, 9, 11, 13};).
- Solicite um número ao usuário para buscar.
- Implemente a busca binária: divida o intervalo ao meio até encontrar ou não.
- Imprima se encontrou e em qual posição.

**Dicas:**
- Use variáveis left e right para o intervalo.
- Enquanto left <= right, calcule mid = (left + right) / 2.
- Compare com nums[mid] e ajuste left ou right.
- Retorne o índice ou -1 se não encontrado.

**O que aprender:**
- Algoritmos de busca eficientes.
- Manipulação de índices em vetores.
- Complexidade O(log n).