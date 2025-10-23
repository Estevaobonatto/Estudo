# Criar arquivo de entrada
with open('entrada.txt', 'w') as f:
    f.write("Linha 1\nLinha 2\nLinha 3\n")

# Ler e contar
with open('entrada.txt', 'r') as f:
    linhas = f.readlines()
    num_linhas = len(linhas)

# Escrever saída
with open('saida.txt', 'w') as f:
    f.write(f"Número de linhas: {num_linhas}\n")

print("Arquivo processado.")