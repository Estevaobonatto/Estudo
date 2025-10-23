n = int(input("Digite o número de termos da sequência de Fibonacci: "))
fib = [0, 1]
for i in range(2, n):
    fib.append(fib[i-1] + fib[i-2])
print(f"Sequência de Fibonacci: {fib[:n]}")