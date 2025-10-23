# Exercício 36: Filter e Reduce

**Objetivo:** Usar filter para pares e reduce para soma.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio36.py`).
- Filtrar números pares de uma lista.
- Somar com reduce.

**Dicas:**
- from functools import reduce
- pares = list(filter(lambda x: x % 2 == 0, lista))
- soma = reduce(lambda a, b: a + b, pares)

**O que aprender:**
- Funções funcionais: filter, reduce.
- Processamento de coleções.