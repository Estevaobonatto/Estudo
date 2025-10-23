# Exercício 14: Contar Vogais

**Objetivo:** Escrever um programa que conte quantas vogais (a, e, i, o, u) há em uma string fornecida pelo usuário, ignorando maiúsculas/minúsculas.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio14.cs`).
- Solicite uma string ao usuário.
- Conte as vogais usando um loop ou LINQ.
- Imprima o total de vogais.

**Dicas:**
- Converta para minúsculas: `str.ToLower()`.
- Use `if ("aeiou".Contains(c))` para verificar.
- Você pode usar LINQ: `str.Count(c => "aeiou".Contains(c))`.

**O que aprender:**
- Iteração sobre strings.
- Contagem condicional e LINQ.