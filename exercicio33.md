# Exercício 33: Fatorial com Memoização

**Objetivo:** Implementar fatorial recursivo com memoização para otimizar.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio33.py`).
- Use um dicionário para cache.
- Compare com versão sem memo.

**Dicas:**
- cache = {}
- def fat(n): if n in cache: return cache[n]; if n == 0: return 1; cache[n] = n * fat(n-1); return cache[n]

**O que aprender:**
- Otimização com memoização.
- Recursão eficiente.