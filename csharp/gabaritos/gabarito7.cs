using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        int n = int.Parse(Console.ReadLine());
        if (n <= 1)
        {
            Console.WriteLine("Não é primo");
        }
        else
        {
            bool primo = true;
            for (int i = 2; i <= (int)Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    primo = false;
                    break;
                }
            }
            if (primo)
            {
                Console.WriteLine("É primo");
            }
            else
            {
                Console.WriteLine("Não é primo");
            }
        }
    }
}