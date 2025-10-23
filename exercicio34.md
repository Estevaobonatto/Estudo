# Exercício 34: Crivo de Eratóstenes

**Objetivo:** Implementar o crivo para gerar primos até n.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio34.py`).
- Use uma lista de booleanos.
- Marque múltiplos como não primos.

**Dicas:**
- lista = [True] * (n+1)
- for i in range(2, int(n**0.5)+1): if lista[i]: for j in range(i*i, n+1, i): lista[j] = False

**O que aprender:**
- Algoritmos de teoria dos números.
- Eficiência em geração de primos.