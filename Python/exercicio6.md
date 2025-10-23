# Exercício 6: Contar Palavras

**Objetivo:** Escrever um programa que conte a frequência de cada palavra em uma frase usando dicionários.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio6.py`).
- Defina uma string com uma frase (ex: "o rato roeu a roupa do rei de roma").
- Divida a frase em palavras usando `split()`.
- Use um dicionário para contar quantas vezes cada palavra aparece.
- Imprima o dicionário com as contagens.

**Dicas:**
- `palavras = frase.split()` divide a string em uma lista de palavras.
- Para cada palavra, verifique se já está no dicionário; se sim, incremente; senão, adicione com valor 1.
- Você pode usar `contagem.get(palavra, 0) + 1` para simplificar.

**O que aprender:**
- Estruturas de dados: dicionários em Python.
- Manipulação de strings e listas.
- Lógica de contagem e mapeamento.