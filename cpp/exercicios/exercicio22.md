# Exercício 22: Tratamento de Exceções

**Objetivo:** Escrever um programa que solicite dois números e divida o primeiro pelo segundo, tratando divisão por zero.

**Instruções:**
- Crie um arquivo C++ (por exemplo, `exercicio22.cpp`).
- Use try-catch para capturar divisão por zero.
- Imprima o resultado ou uma mensagem de erro.

**Dicas:**
- try { if (b == 0) throw std::runtime_error("Divisão por zero"); double res = a / b; } catch (const std::exception& e) { std::cout << e.what() << std::endl; }
- Inclua `<stdexcept>`.

**O que aprender:**
- Tratamento de exceções em C++.
- Robustez de programas.