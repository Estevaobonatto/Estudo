using System;

class Program
{
    static void Main()
    {
        try
        {
            Console.Write("Digite o primeiro número: ");
            double a = double.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número: ");
            double b = double.Parse(Console.ReadLine());
            double resultado = a / b;
            Console.WriteLine($"Resultado: {resultado}");
        }
        catch (DivideByZeroException)
        {
            Console.WriteLine("Erro: divisão por zero");
        }
        catch (FormatException)
        {
            Console.WriteLine("Erro: entrada inválida");
        }
    }
}