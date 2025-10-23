using System;
using System.Collections.Generic;

class Program
{
    static List<int> MergeSort(List<int> lst)
    {
        if (lst.Count <= 1)
            return lst;
        int mid = lst.Count / 2;
        List<int> left = MergeSort(lst.GetRange(0, mid));
        List<int> right = MergeSort(lst.GetRange(mid, lst.Count - mid));
        return Merge(left, right);
    }

    static List<int> Merge(List<int> left, List<int> right)
    {
        List<int> result = new List<int>();
        int i = 0, j = 0;
        while (i < left.Count && j < right.Count)
        {
            if (left[i] < right[j])
            {
                result.Add(left[i]);
                i++;
            }
            else
            {
                result.Add(right[j]);
                j++;
            }
        }
        result.AddRange(left.GetRange(i, left.Count - i));
        result.AddRange(right.GetRange(j, right.Count - j));
        return result;
    }

    static void Main()
    {
        List<int> lst = new List<int> { 64, 34, 25, 12, 22, 11, 90 };
        List<int> sorted = MergeSort(lst);
        Console.WriteLine("Ordenada: " + string.Join(", ", sorted));
    }
}