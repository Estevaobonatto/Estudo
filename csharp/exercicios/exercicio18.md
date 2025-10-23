# Exercício 18: Soma de Elementos em uma Lista

**Objetivo:** Escrever um programa que calcule a soma de todos os elementos em uma lista de números usando recursão.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio18.cs`).
- Defina uma função recursiva que some os elementos da lista.
- Teste com uma lista exemplo e imprima o resultado.

**Dicas:**
- Função: int SomaRecursiva(List<int> lst, int index) { if (index == lst.Count) return 0; return lst[index] + SomaRecursiva(lst, index + 1); }
- Evite loops, use recursão.

**O que aprender:**
- Recursão em C#.
- Casos base e recursivos.