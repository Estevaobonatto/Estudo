# Exercício 13: Palíndromo

**Objetivo:** Escrever um programa que verifique se uma string fornecida pelo usuário é um palíndromo (lê-se igual de trás para frente, ignorando maiúsculas/minúsculas e espaços).

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio13.cs`).
- Solicite uma string ao usuário.
- Remova espaços e converta para minúsculas.
- Verifique se a string é igual à sua reversa.
- Imprima se é palíndromo ou não.

**Dicas:**
- Use `str.ToLower().Replace(" ", "")` para normalizar.
- Compare com `new string(str.Reverse().ToArray())`.
- Exemplos: "A man a plan a canal Panama" é palíndromo.

**O que aprender:**
- Manipulação avançada de strings.
- Lógica de comparação e normalização.