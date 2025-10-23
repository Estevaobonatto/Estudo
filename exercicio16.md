# Exercício 16: Busca Binária

**Objetivo:** Escrever um programa que implemente a busca binária para encontrar um elemento em uma lista ordenada.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio16.py`).
- Defina uma lista ordenada (ex: [1, 3, 5, 7, 9, 11, 13]).
- Solicite um número ao usuário para buscar.
- Implemente a busca binária: divida o intervalo ao meio até encontrar ou não.
- Imprima se encontrou e em qual posição.

**Dicas:**
- Use variáveis left e right para o intervalo.
- Enquanto left <= right, calcule mid = (left + right) // 2.
- Compare com lista[mid] e ajuste left ou right.
- Retorne o índice ou -1 se não encontrado.

**O que aprender:**
- Algoritmos de busca eficientes.
- Manipulação de índices em listas.
- Complexidade O(log n).