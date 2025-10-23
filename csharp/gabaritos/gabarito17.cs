using System;

class Retangulo
{
    public double Largura { get; set; }
    public double Altura { get; set; }

    public Retangulo(double largura, double altura)
    {
        Largura = largura;
        Altura = altura;
    }

    public double Area()
    {
        return Largura * Altura;
    }

    public double Perimetro()
    {
        return 2 * (Largura + Altura);
    }
}

class Program
{
    static void Main()
    {
        Console.Write("Digite a largura: ");
        double largura = double.Parse(Console.ReadLine());
        Console.Write("Digite a altura: ");
        double altura = double.Parse(Console.ReadLine());
        Retangulo ret = new Retangulo(largura, altura);
        Console.WriteLine($"Área: {ret.Area()}");
        Console.WriteLine($"Perímetro: {ret.Perimetro()}");
    }
}