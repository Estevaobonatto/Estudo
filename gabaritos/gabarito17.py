class Retangulo:
    def __init__(self, largura, altura):
        self.largura = largura
        self.altura = altura
    
    def area(self):
        return self.largura * self.altura
    
    def perimetro(self):
        return 2 * (self.largura + self.altura)

largura = float(input("Digite a largura: "))
altura = float(input("Digite a altura: "))
ret = Retangulo(largura, altura)
print(f"Área: {ret.area()}")
print(f"Perímetro: {ret.perimetro()}")