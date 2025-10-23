import time

def busca_linear(lst, alvo):
    for i, item in enumerate(lst):
        if item == alvo:
            return i
    return -1

def busca_binaria(lst, alvo):
    left, right = 0, len(lst) - 1
    while left <= right:
        mid = (left + right) // 2
        if lst[mid] == alvo:
            return mid
        elif lst[mid] < alvo:
            left = mid + 1
        else:
            right = mid - 1
    return -1

lista = list(range(0, 10000, 2))  # lista grande
alvo = 5000

start = time.time()
idx_linear = busca_linear(lista, alvo)
end = time.time()
print(f"Linear: {idx_linear}, tempo: {end - start}")

start = time.time()
idx_binaria = busca_binaria(lista, alvo)
end = time.time()
print(f"Binária: {idx_binaria}, tempo: {end - start}")