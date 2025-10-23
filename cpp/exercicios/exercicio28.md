# Exercício 28: Validação de Email com Regex

**Objetivo:** Usar expressões regulares para validar se uma string é um email válido.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio28.cpp`).
- Use <regex>.
- Defina um padrão regex para email.
- Teste com entradas.

**Dicas:**
- Inclua `<regex>`.
- std::regex pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)"); std::smatch match; if (std::regex_match(email, match, pattern))

**O que aprender:**
- Expressões regulares em C++.
- Validação de strings.