import random

frequencias = {1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0}
for _ in range(1000):
    face = random.randint(1, 6)
    frequencias[face] += 1

print("Frequências:")
for face, count in frequencias.items():
    print(f"{face}: {count}")