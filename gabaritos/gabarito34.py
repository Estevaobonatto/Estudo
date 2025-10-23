def crivo(n):
    lista = [True] * (n + 1)
    lista[0] = lista[1] = False
    for i in range(2, int(n**0.5) + 1):
        if lista[i]:
            for j in range(i*i, n+1, i):
                lista[j] = False
    return [i for i in range(2, n+1) if lista[i]]

n = int(input("Digite n: "))
primos = crivo(n)
print(f"Primos até {n}: {primos}")