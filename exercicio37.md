# Exercício 37: Classe Conta Bancária

**Objetivo:** Criar uma classe Conta com depósito, saque e saldo.

**Instruções:**
- Crie um arquivo Python (por exemplo, `exercicio37.py`).
- Métodos: depositar, sacar, ver_saldo.
- Tratar saque insuficiente.

**Dicas:**
- self.saldo = 0
- def depositar(self, valor): self.saldo += valor
- def sacar(self, valor): if self.saldo >= valor: self.saldo -= valor; return True; return False

**O que aprender:**
- OOP avançada.
- Encapsulamento e validação.