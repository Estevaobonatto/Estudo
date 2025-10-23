def soma(a, b):
    return a + b

def subtracao(a, b):
    return a - b

def multiplicacao(a, b):
    return a * b

def divisao(a, b):
    if b != 0:
        return a / b
    return "Erro"

op = input("Digite operação (+, -, *, /): ")
a = float(input("Primeiro número: "))
b = float(input("Segundo número: "))

if op == '+':
    print(f"Resultado: {soma(a, b)}")
elif op == '-':
    print(f"Resultado: {subtracao(a, b)}")
elif op == '*':
    print(f"Resultado: {multiplicacao(a, b)}")
elif op == '/':
    print(f"Resultado: {divisao(a, b)}")
else:
    print("Operação inválida")