using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite um número positivo: ");
        double x = double.Parse(Console.ReadLine());
        Console.WriteLine($"Raiz quadrada: {Math.Sqrt(x)}");
        Console.WriteLine($"Seno: {Math.Sin(x)}");
        Console.WriteLine($"Logaritmo natural: {Math.Log(x)}");
    }
}