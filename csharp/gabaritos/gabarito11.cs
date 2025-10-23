using System;

class Program
{
    static void Main()
    {
        Random rand = new Random();
        int numero_secreto = rand.Next(1, 101);
        int palpite = 0;
        while (palpite != numero_secreto)
        {
            Console.Write("Adivinhe o número (1-100): ");
            palpite = int.Parse(Console.ReadLine());
            if (palpite < numero_secreto)
            {
                Console.WriteLine("Maior!");
            }
            else if (palpite > numero_secreto)
            {
                Console.WriteLine("Menor!");
            }
        }
        Console.WriteLine("Acertou!");
    }
}