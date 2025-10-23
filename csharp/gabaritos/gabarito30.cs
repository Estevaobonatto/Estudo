using System;

class Program
{
    static double Soma(double a, double b) => a + b;
    static double Subtracao(double a, double b) => a - b;
    static double Multiplicacao(double a, double b) => a * b;
    static double Divisao(double a, double b) => b != 0 ? a / b : double.NaN;

    static void Main()
    {
        Console.Write("Digite operação (+, -, *, /): ");
        string op = Console.ReadLine();
        Console.Write("Primeiro número: ");
        double a = double.Parse(Console.ReadLine());
        Console.Write("Segundo número: ");
        double b = double.Parse(Console.ReadLine());

        double resultado = 0;
        if (op == "+") resultado = Soma(a, b);
        else if (op == "-") resultado = Subtracao(a, b);
        else if (op == "*") resultado = Multiplicacao(a, b);
        else if (op == "/") resultado = Divisao(a, b);

        Console.WriteLine($"Resultado: {resultado}");
    }
}