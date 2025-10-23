using System;
using System.Collections.Generic;

class Program
{
    static int SomaRecursiva(List<int> lst, int index)
    {
        if (index == lst.Count)
            return 0;
        return lst[index] + SomaRecursiva(lst, index + 1);
    }

    static void Main()
    {
        List<int> lista = new List<int> { 1, 2, 3, 4, 5 };
        Console.WriteLine($"Soma: {SomaRecursiva(lista, 0)}");
    }
}