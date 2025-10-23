using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        string frase = "o rato roeu a roupa do rei de roma";
        string[] palavras = frase.Split(' ');
        Dictionary<string, int> contagem = new Dictionary<string, int>();
        foreach (string palavra in palavras)
        {
            if (contagem.ContainsKey(palavra))
            {
                contagem[palavra]++;
            }
            else
            {
                contagem[palavra] = 1;
            }
        }
        foreach (var kvp in contagem)
        {
            Console.WriteLine($"{kvp.Key}: {kvp.Value}");
        }
    }
}