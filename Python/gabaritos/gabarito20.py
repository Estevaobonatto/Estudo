def contar_aninhado(lst, alvo):
    count = 0
    for item in lst:
        if isinstance(item, list):
            count += contar_aninhado(item, alvo)
        elif item == alvo:
            count += 1
    return count

lista = [[1, 2], [2, 3], 2]
alvo = 2
print(f"Contagem de {alvo}: {contar_aninhado(lista, alvo)}")