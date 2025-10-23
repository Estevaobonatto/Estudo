lista = [1, 3, 5, 7, 9, 11, 13]
alvo = int(input("Digite o número a buscar: "))
left, right = 0, len(lista) - 1
while left <= right:
    mid = (left + right) // 2
    if lista[mid] == alvo:
        print(f"Encontrado na posição {mid}")
        break
    elif lista[mid] < alvo:
        left = mid + 1
    else:
        right = mid - 1
else:
    print("Não encontrado")