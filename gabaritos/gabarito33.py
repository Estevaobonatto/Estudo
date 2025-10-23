cache = {}

def fatorial(n):
    if n in cache:
        return cache[n]
    if n == 0:
        return 1
    cache[n] = n * fatorial(n - 1)
    return cache[n]

n = int(input("Digite n: "))
print(f"Fatorial de {n}: {fatorial(n)}")