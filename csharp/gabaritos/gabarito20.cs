using System;
using System.Collections.Generic;

class Program
{
    static int ContarAninhado(List<object> lst, int alvo)
    {
        int count = 0;
        foreach (object item in lst)
        {
            if (item is List<object> sublist)
            {
                count += ContarAninhado(sublist, alvo);
            }
            else if (item is int num && num == alvo)
            {
                count++;
            }
        }
        return count;
    }

    static void Main()
    {
        List<object> lista = new List<object> { new List<int> { 1, 2 }, new List<int> { 2, 3 }, 2 };
        int alvo = 2;
        Console.WriteLine($"Contagem de {alvo}: {ContarAninhado(lista, alvo)}");
    }
}