using System;
using System.IO;

class Program
{
    static void Main()
    {
        // Criar arquivo de entrada
        File.WriteAllText("entrada.txt", "Linha 1\nLinha 2\nLinha 3\n");

        // Ler e contar
        string[] linhas = File.ReadAllLines("entrada.txt");
        int num_linhas = linhas.Length;

        // Escrever saída
        File.WriteAllText("saida.txt", $"Número de linhas: {num_linhas}\n");

        Console.WriteLine("Arquivo processado.");
    }
}