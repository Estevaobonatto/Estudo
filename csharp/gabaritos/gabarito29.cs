using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        List<int> lista = new List<int> { 1, 2, 3, 4, 5 };
        var quadrados = lista.Select(x => x * x).ToList();
        Console.WriteLine("Quadrados: " + string.Join(", ", quadrados));
    }
}