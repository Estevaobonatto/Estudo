a = int(input("Digite o primeiro número: "))
b = int(input("Digite o segundo número: "))
while b != 0:
    a, b = b, a % b
print(f"MDC: {a}")