def soma_recursiva(lst):
    if not lst:
        return 0
    return lst[0] + soma_recursiva(lst[1:])

lista = [1, 2, 3, 4, 5]
print(f"Soma: {soma_recursiva(lista)}")