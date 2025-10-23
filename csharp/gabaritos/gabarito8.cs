using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite uma string: ");
        string str = Console.ReadLine();
        string invertida = new string(str.Reverse().ToArray());
        Console.WriteLine($"String invertida: {invertida}");
    }
}