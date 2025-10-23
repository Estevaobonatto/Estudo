using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        List<int> numeros = new List<int> { 10, 20, 30, 40, 50 };
        double soma = numeros.Sum();
        double media = soma / numeros.Count;
        Console.WriteLine($"A média é: {media}");
    }
}