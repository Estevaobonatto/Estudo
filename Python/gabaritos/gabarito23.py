class Pilha:
    def __init__(self):
        self.items = []
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        return None
    
    def is_empty(self):
        return len(self.items) == 0

pilha = Pilha()
pilha.push(1)
pilha.push(2)
print(f"Pop: {pilha.pop()}")
print(f"Vazia: {pilha.is_empty()}")