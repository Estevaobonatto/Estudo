import random

opcoes = ['pedra', 'papel', 'tesoura']
usuario = input("Escolha (pedra, papel, tesoura): ").lower()
computador = random.choice(opcoes)

print(f"Você: {usuario}, Computador: {computador}")

if usuario == computador:
    print("Empate")
elif (usuario == 'pedra' and computador == 'tesoura') or \
     (usuario == 'papel' and computador == 'pedra') or \
     (usuario == 'tesoura' and computador == 'papel'):
    print("Você ganhou!")
else:
    print("Computador ganhou!")