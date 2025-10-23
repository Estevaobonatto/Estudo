# Exercício 28: Validação de Email com Regex

**Objetivo:** Usar expressões regulares para validar se uma string é um email válido.

**Instruções:**
- Crie um arquivo C# (por exemplo, `exercicio28.cs`).
- Use System.Text.RegularExpressions.
- Defina um padrão regex para email.
- Teste com entradas.

**Dicas:**
- using System.Text.RegularExpressions;
- Regex pattern = new Regex(@"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$");
- pattern.IsMatch(email)

**O que aprender:**
- Expressões regulares em C#.
- Validação de strings.