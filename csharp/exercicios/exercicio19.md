# Exercício 19: Inverter Lista Recursivamente

**Objetivo:** Escrever um programa que inverta uma lista usando recursão.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio19.cs`).
- Defina uma função recursiva para inverter a lista.
- Teste com uma lista exemplo e imprima o resultado.

**Dicas:**
- Função: List<int> Inverter(List<int> lst) { if (lst.Count <= 1) return lst; return Inverter(lst.Skip(1).ToList()).Concat(new List<int> { lst[0] }).ToList(); }
- Construa a lista invertida passo a passo.

**O que aprender:**
- Recursão para manipulação de listas.
- Concatenação de listas.