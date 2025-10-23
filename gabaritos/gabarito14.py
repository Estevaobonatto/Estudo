string = input("Digite uma string: ")
vogais = sum(1 for char in string.lower() if char in 'aeiou')
print(f"Número de vogais: {vogais}")