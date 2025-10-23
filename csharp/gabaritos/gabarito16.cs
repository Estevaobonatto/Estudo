using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> lista = new List<int> { 1, 3, 5, 7, 9, 11, 13 };
        Console.Write("Digite o número a buscar: ");
        int alvo = int.Parse(Console.ReadLine());
        int left = 0, right = lista.Count - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (lista[mid] == alvo)
            {
                Console.WriteLine($"Encontrado na posição {mid}");
                return;
            }
            else if (lista[mid] < alvo)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        Console.WriteLine("Não encontrado");
    }
}