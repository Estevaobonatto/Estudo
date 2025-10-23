using System;
using System.Collections.Generic;

class Fila
{
    private List<int> items = new List<int>();

    public void Enqueue(int item)
    {
        items.Add(item);
    }

    public int? Dequeue()
    {
        if (!IsEmpty())
        {
            int item = items[0];
            items.RemoveAt(0);
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
        Fila fila = new Fila();
        fila.Enqueue(1);
        fila.Enqueue(2);
        Console.WriteLine($"Dequeue: {fila.Dequeue()}");
        Console.WriteLine($"Vazia: {fila.IsEmpty()}");
    }
}