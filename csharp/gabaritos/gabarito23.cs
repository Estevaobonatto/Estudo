using System;
using System.Collections.Generic;

class Pilha
{
    private List<int> items = new List<int>();

    public void Push(int item)
    {
        items.Add(item);
    }

    public int? Pop()
    {
        if (!IsEmpty())
        {
            int item = items[items.Count - 1];
            items.RemoveAt(items.Count - 1);
            return item;
        }
        return null;
    }

    public bool IsEmpty()
    {
        return items.Count == 0;
    }
}

class Program
{
    static void Main()
    {
        Pilha pilha = new Pilha();
        pilha.Push(1);
        pilha.Push(2);
        Console.WriteLine($"Pop: {pilha.Pop()}");
        Console.WriteLine($"Vazia: {pilha.IsEmpty()}");
    }
}