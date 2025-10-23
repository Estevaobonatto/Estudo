using System;
using System.Collections.Generic;
using System.Diagnostics;

class Program
{
    static int BuscaLinear(List<int> lst, int alvo)
    {
        for (int i = 0; i < lst.Count; i++)
        {
            if (lst[i] == alvo)
                return i;
        }
        return -1;
    }

    static int BuscaBinaria(List<int> lst, int alvo)
    {
        int left = 0, right = lst.Count - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (lst[mid] == alvo)
                return mid;
            else if (lst[mid] < alvo)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }

    static void Main()
    {
        List<int> lst = new List<int>();
        for (int i = 0; i < 10000; i++) lst.Add(i * 2);
        int alvo = 5000;

        Stopwatch sw = Stopwatch.StartNew();
        int linear = BuscaLinear(lst, alvo);
        sw.Stop();
        Console.WriteLine($"Linear: {linear}, Tempo: {sw.ElapsedMilliseconds}ms");

        sw.Restart();
        int binaria = BuscaBinaria(lst, alvo);
        sw.Stop();
        Console.WriteLine($"Binária: {binaria}, Tempo: {sw.ElapsedMilliseconds}ms");
    }
}