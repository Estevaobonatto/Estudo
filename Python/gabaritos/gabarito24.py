class Fila:
    def __init__(self):
        self.items = []
    
    def enqueue(self, item):
        self.items.append(item)
    
    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        return None
    
    def is_empty(self):
        return len(self.items) == 0

fila = Fila()
fila.enqueue(1)
fila.enqueue(2)
print(f"Dequeue: {fila.dequeue()}")
print(f"Vazia: {fila.is_empty()}")