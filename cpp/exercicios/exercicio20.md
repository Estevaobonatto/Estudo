# Exercício 20: Contar Elementos em Vetor Aninhado

**Objetivo:** Escrever um programa que conte quantas vezes um elemento aparece em um vetor que pode conter subvetores.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio20.cpp`).
- Defina uma função recursiva para percorrer vetores aninhados.
- Conte ocorrências de um alvo específico.
- Imprima o resultado.

**Dicas:**
- Use recursão: se item é std::vector, some contagens das sublistas.
- Exemplo: std::vector<std::variant<int, std::vector<int>>> lista = {{1,2}, {2,3}, 2}; contar 2 deve dar 3.
- Use std::variant para tipos mistos.

**O que aprender:**
- Estruturas de dados aninhadas.
- Recursão em estruturas complexas.