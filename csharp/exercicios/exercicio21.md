# Exercício 21: Ler e Escrever Arquivo

**Objetivo:** Escrever um programa que leia um arquivo de texto, conte as linhas, e escreva o resultado em outro arquivo.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio21.cs`).
- Crie um arquivo de entrada com algumas linhas de texto.
- Leia o arquivo, conte as linhas.
- Escreva o número de linhas em um arquivo de saída.

**Dicas:**
- Use `File.ReadAllLines("arquivo.txt").Length` para contar.
- Escreva com `File.WriteAllText("saida.txt", count.ToString());`

**O que aprender:**
- Manipulação de arquivos em C#.
- Uso da classe File.