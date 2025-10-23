using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite uma string: ");
        string str = Console.ReadLine();
        string normalizada = str.ToLower().Replace(" ", "");
        string reversa = new string(normalizada.Reverse().ToArray());
        if (normalizada == reversa)
        {
            Console.WriteLine("É um palíndromo.");
        }
        else
        {
            Console.WriteLine("Não é um palíndromo.");
        }
    }
}