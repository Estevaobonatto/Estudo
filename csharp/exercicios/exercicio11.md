# Exercício 11: Jogo da Adivinhação

**Objetivo:** Criar um jogo simples onde o usuário tenta adivinhar um número secreto gerado aleatoriamente.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio11.cs`).
- Gere um número aleatório entre 1 e 100.
- Solicite palpites do usuário em um loop até acertar.
- Para cada palpite, informe se é maior, menor ou correto.
- Pare quando acertar.

**Dicas:**
- Use `Random rand = new Random(); int secreto = rand.Next(1, 101);`
- Use um loop `while` que continue enquanto o palpite não for correto.
- Compare e dê feedback.

**O que aprender:**
- Uso da classe `Random` para gerar números aleatórios.
- Loops `while` para repetição condicional.
- Lógica de jogos interativos.