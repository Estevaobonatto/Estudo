from functools import reduce

lista = [1, 2, 3, 4, 5, 6]
pares = list(filter(lambda x: x % 2 == 0, lista))
soma = reduce(lambda a, b: a + b, pares)
print(f"Pares: {pares}, Soma: {soma}")