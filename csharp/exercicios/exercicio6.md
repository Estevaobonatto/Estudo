# Exercício 6: Contar Palavras

**Objetivo:** Escrever um programa que conte a frequência de cada palavra em uma frase usando dicionários.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio6.cs`).
- Defina uma string com uma frase (ex: "o rato roeu a roupa do rei de roma").
- Divida a frase em palavras usando `Split()`.
- Use um `Dictionary<string, int>` para contar quantas vezes cada palavra aparece.
- Imprima o dicionário com as contagens.

**Dicas:**
- `string[] palavras = frase.Split(' ');` divide a string.
- Para cada palavra, use `contagem[palavra] = contagem.ContainsKey(palavra) ? contagem[palavra] + 1 : 1;`
- Você pode usar LINQ para simplificar.

**O que aprender:**
- Estruturas de dados: dicionários em C#.
- Manipulação de strings e arrays.
- Lógica de contagem e mapeamento.