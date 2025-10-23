def inverter(lst):
    if len(lst) <= 1:
        return lst
    return inverter(lst[1:]) + [lst[0]]

lista = [1, 2, 3, 4, 5]
print(f"Invertida: {inverter(lista)}")