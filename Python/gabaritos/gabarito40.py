import math

while True:
    op = input("Operação (soma, sqrt, sin, sair): ").lower()
    if op == 'sair':
        break
    elif op == 'soma':
        a = float(input("A: "))
        b = float(input("B: "))
        print(f"Resultado: {a + b}")
    elif op == 'sqrt':
        a = float(input("Número: "))
        print(f"Resultado: {math.sqrt(a)}")
    elif op == 'sin':
        a = float(input("Ângulo em radianos: "))
        print(f"Resultado: {math.sin(a)}")
    else:
        print("Operação inválida")