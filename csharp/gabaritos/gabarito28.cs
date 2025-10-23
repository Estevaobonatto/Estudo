using System;
using System.Text.RegularExpressions;

class Program
{
    static bool ValidarEmail(string email)
    {
        string pattern = @"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$";
        return Regex.IsMatch(email, pattern);
    }

    static void Main()
    {
        Console.Write("Digite um email: ");
        string email = Console.ReadLine();
        if (ValidarEmail(email))
        {
            Console.WriteLine("Email válido");
        }
        else
        {
            Console.WriteLine("Email inválido");
        }
    }
}