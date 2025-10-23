palavra = "python"
descobertas = ['_'] * len(palavra)
tentativas = 6

while '_' in descobertas and tentativas > 0:
    print(' '.join(descobertas))
    letra = input("Digite uma letra: ").lower()
    if letra in palavra:
        for i, l in enumerate(palavra):
            if l == letra:
                descobertas[i] = letra
    else:
        tentativas -= 1
        print(f"Tentativas restantes: {tentativas}")

if '_' not in descobertas:
    print("Você ganhou!")
else:
    print("Você perdeu!")