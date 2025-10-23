using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> numeros = new List<int> { 3, 1, 4, 1, 5, 9, 2 };
        int maximo = numeros[0];
        foreach (int num in numeros)
        {
            if (num > maximo)
            {
                maximo = num;
            }
        }
        Console.WriteLine($"O maior número é: {maximo}");
    }
}