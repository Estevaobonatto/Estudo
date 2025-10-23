using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        int n = int.Parse(Console.ReadLine());
        int fatorial = 1;
        for (int i = 1; i <= n; i++)
        {
            fatorial *= i;
        }
        Console.WriteLine($"O fatorial de {n} é {fatorial}");
    }
}