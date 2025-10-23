#include <iostream>

class Retangulo {
private:
    double largura, altura;
public:
    Retangulo(double l, double a) : largura(l), altura(a) {}
    double area() {
        return largura * altura;
    }
    double perimetro() {
        return 2 * (largura + altura);
    }
};

int main() {
    double largura, altura;
    std::cout << "Digite a largura: ";
    std::cin >> largura;
    std::cout << "Digite a altura: ";
    std::cin >> altura;
    Retangulo ret(largura, altura);
    std::cout << "Área: " << ret.area() << std::endl;
    std::cout << "Perímetro: " << ret.perimetro() << std::endl;
    return 0;
}