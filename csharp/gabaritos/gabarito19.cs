using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static List<int> Inverter(List<int> lst)
    {
        if (lst.Count <= 1)
            return lst;
        return Inverter(lst.Skip(1).ToList()).Concat(new List<int> { lst[0] }).ToList();
    }

    static void Main()
    {
        List<int> lista = new List<int> { 1, 2, 3, 4, 5 };
        List<int> invertida = Inverter(lista);
        Console.WriteLine("Invertida: " + string.Join(", ", invertida));
    }
}