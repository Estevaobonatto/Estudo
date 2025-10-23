string = input("Digite uma string: ")
normalizada = string.lower().replace(" ", "")
if normalizada == normalizada[::-1]:
    print("É um palíndromo.")
else:
    print("Não é um palíndromo.")