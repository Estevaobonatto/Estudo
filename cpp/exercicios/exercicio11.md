# Exercício 11: Jogo da Adivinhação

**Objetivo:** Criar um jogo simples onde o usuário tenta adivinhar um número secreto gerado aleatoriamente.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio11.cpp`).
- Gere um número aleatório entre 1 e 100.
- Solicite palpites do usuário em um loop até acertar.
- Para cada palpite, informe se é maior, menor ou correto.
- Pare quando acertar.

**Dicas:**
- Inclua `<random>`, `<ctime>`.
- Use `std::mt19937 gen(time(0)); std::uniform_int_distribution<> dist(1, 100); int secreto = dist(gen);`
- Use um loop `while`.

**O que aprender:**
- Uso da biblioteca `<random>` para gerar números aleatórios.
- Loops `while` para repetição condicional.
- Lógica de jogos interativos.