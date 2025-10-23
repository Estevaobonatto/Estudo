import csv

# Criar CSV exemplo
with open('dados.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['Nome', 'Idade'])
    writer.writerow(['Ana', '25'])
    writer.writerow(['João', '30'])

# Ler e somar idades
soma = 0
with open('dados.csv') as f:
    reader = csv.reader(f)
    next(reader)  # pular header
    for row in reader:
        soma += int(row[1])

print(f"Soma das idades: {soma}")