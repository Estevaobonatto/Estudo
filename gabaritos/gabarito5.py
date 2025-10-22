numeros = [3, 1, 4, 1, 5, 9, 2]
maximo = numeros[0]
for num in numeros:
    if num > maximo:
        maximo = num
print(f"O maior número é: {maximo}")