class Conta:
    def __init__(self):
        self.saldo = 0
    
    def depositar(self, valor):
        self.saldo += valor
    
    def sacar(self, valor):
        if self.saldo >= valor:
            self.saldo -= valor
            return True
        return False
    
    def ver_saldo(self):
        return self.saldo

conta = Conta()
conta.depositar(100)
conta.sacar(50)
print(f"Saldo: {conta.ver_saldo()}")