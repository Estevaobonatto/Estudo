# exercicio7.py
# Programa para verificar se um número é primo

import math

def eh_primo(n):
    """
    Verifica se um número n é primo.
    Um número primo é maior que 1 e divisível apenas por 1 e por ele mesmo.
    """
    if n <= 1:
        return False
    if n == 2:
        return True  # 2 é o único número primo par
    if n % 2 == 0:
        return False  # Elimina números pares maiores que 2

    # Testa divisores ímpares de 3 até a raiz quadrada de n
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True

# Solicita entrada do usuário
try:
    numero = int(input("Digite um número inteiro maior que 1: "))
    if eh_primo(numero):
        print(f"{numero} é um número primo.")
    else:
        print(f"{numero} não é um número primo.")
except ValueError:
    print("Erro: Digite um número inteiro válido.")