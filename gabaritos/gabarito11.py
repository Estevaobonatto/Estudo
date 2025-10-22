import random

numero_secreto = random.randint(1, 100)
palpite = 0
while palpite != numero_secreto:
    palpite = int(input("Adivinhe o número (1-100): "))
    if palpite < numero_secreto:
        print("Maior!")
    elif palpite > numero_secreto:
        print("Menor!")
print("Acertou!")