using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite uma string: ");
        string str = Console.ReadLine();
        int vogais = str.Count(c => "aeiou".Contains(char.ToLower(c)));
        Console.WriteLine($"Número de vogais: {vogais}");
    }
}