using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite o primeiro número: ");
        int a = int.Parse(Console.ReadLine());
        Console.Write("Digite o segundo número: ");
        int b = int.Parse(Console.ReadLine());
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        Console.WriteLine($"MDC: {a}");
    }
}