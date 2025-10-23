# Estruturas de Código em C++

Olá! Explorando C++, vamos adaptar as estruturas de código. C++ é uma linguagem de baixo nível, com mais controle, mas também mais complexidade. Focaremos nas estruturas básicas: condicionais, loops, funções e classes.

## 1. Estruturas Condicionais: `if`, `else if` e `else`

### O que são?
Executam blocos baseados em condições.

### Sintaxe Básica:
```cpp
if (condição) {
    // código
} else if (outra_condição) {
    // código
} else {
    // código
}
```

### Exemplos nos Exercícios:

- **Exercício 3 (gabarito3.cpp)**: Par ou ímpar.
  ```cpp
  if (num % 2 == 0) {
      std::cout << "Par" << std::endl;
  } else {
      std::cout << "Ímpar" << std::endl;
  }
  ```

### Dicas de Estudo:
- Use chaves sempre.
- Condições booleanas.

## 2. Loops: `for`

### O que é?
Iteração controlada.

### Sintaxe Básica:
```cpp
for (inicialização; condição; incremento) {
    // código
}
```

### Exemplos nos Exercícios:

- **Exercício 4 (gabarito4.cpp)**: Fatorial.
  ```cpp
  for (int i = 1; i <= n; i++) {
      fatorial *= i;
  }
  ```

- **Exercício 5 (gabarito5.cpp)**: Máximo.
  ```cpp
  for (int i = 1; i < tamanho; i++) {
      if (nums[i] > maximo) {
          maximo = nums[i];
      }
  }
  ```

### Dicas de Estudo:
- Declare variáveis no loop.
- Use arrays com `sizeof` para tamanho.

## 3. Loops: `while`

### Sintaxe Básica:
```cpp
while (condição) {
    // código
}
```

### Exemplos nos Exercícios:

- **Exercício 11 (gabarito11.cpp)**: Jogo da adivinhação.
  ```cpp
  while (palpite != numero_secreto) {
      // código
  }
  ```

### Dicas de Estudo:
- Similar ao C#.

## 4. Funções

### Sintaxe Básica:
```cpp
tipo_retorno nome_funcao(parametros) {
    // código
    return valor;
}
```

### Exemplos nos Exercícios:

- **Exercício 18 (gabarito18.cpp)**: Soma recursiva.
  ```cpp
  int soma_recursiva(const std::vector<int>& lst, size_t index = 0) {
      if (index == lst.size()) return 0;
      return lst[index] + soma_recursiva(lst, index + 1);
  }
  ```

### Dicas de Estudo:
- Declare protótipos se necessário.
- Use `int main()` como ponto de entrada.

## 5. Classes

### Sintaxe Básica:
```cpp
class NomeClasse {
public:
    // métodos
};
```

### Exemplos nos Exercícios:

- **Exercício 17 (gabarito17.cpp)**: Classe Retangulo.
  ```cpp
  class Retangulo {
  private:
      double largura, altura;
  public:
      Retangulo(double l, double a) : largura(l), altura(a) {}
      double area() { return largura * altura; }
  };
  ```

### Dicas de Estudo:
- Controle de acesso (public, private).

## 6. Vetores (std::vector)

### O que é?
Estrutura dinâmica para armazenar sequências de elementos.

### Sintaxe Básica:
```cpp
#include <vector>
std::vector<tipo> nome;
nome.push_back(elemento);
```

### Exemplos nos Exercícios:

- **Exercício 9 (gabarito9.cpp)**: Bubble sort.
  ```cpp
  std::vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
  ```

### Dicas de Estudo:
- Dinâmico, cresce automaticamente.
- Acesso por índice: `nums[i]`.

## 7. Mapas (std::map)

### O que é?
Estrutura para armazenar pares chave-valor.

### Sintaxe Básica:
```cpp
#include <map>
std::map<chave, valor> nome;
nome[chave] = valor;
```

### Exemplos nos Exercícios:

- **Exercício 6 (gabarito6.cpp)**: Contar palavras.
  ```cpp
  std::map<std::string, int> contagem;
  contagem[palavra]++;
  ```

### Dicas de Estudo:
- Chaves únicas, ordenadas.
- Iteração com range-based for.

## 8. Recursão

### O que é?
Função que chama a si mesma.

### Exemplos nos Exercícios:

- **Exercício 19 (gabarito19.cpp)**: Inverter vetor recursivamente.
  ```cpp
  void inverter_recursivo(std::vector<int>& lst, size_t start, size_t end) {
      if (start >= end) return;
      std::swap(lst[start], lst[end]);
      inverter_recursivo(lst, start + 1, end - 1);
  }
  ```

### Dicas de Estudo:
- Caso base para parar.
- Cuidado com stack overflow.

## 9. Arquivos (fstream)

### Sintaxe Básica:
```cpp
#include <fstream>
std::ifstream in("arquivo.txt");
std::ofstream out("saida.txt");
```

### Exemplos nos Exercícios:

- **Exercício 21 (gabarito21.cpp)**: Ler e escrever arquivo.
  ```cpp
  std::ifstream in("entrada.txt");
  std::string line;
  while (std::getline(in, line)) { /* processar */ }
  ```

### Dicas de Estudo:
- Sempre feche arquivos ou use RAII.

## 10. Exceções (try-catch)

### Sintaxe Básica:
```cpp
try {
    // código
} catch (const std::exception& e) {
    // tratar
}
```

### Exemplos nos Exercícios:

- **Exercício 22 (gabarito22.cpp)**: Tratamento de divisão por zero.
  ```cpp
  if (b == 0) throw std::runtime_error("Divisão por zero");
  ```

### Dicas de Estudo:
- Use para erros inesperados.

## 11. Algoritmos da STL

### Exemplos nos Exercícios:

- **Exercício 8 (gabarito8.cpp)**: std::reverse.
  ```cpp
  std::reverse(str.begin(), str.end());
  ```

- **Exercício 10 (gabarito10.cpp)**: std::accumulate.
  ```cpp
  std::accumulate(nums.begin(), nums.end(), 0.0);
  ```

### Dicas de Estudo:
- Inclua `<algorithm>`, `<numeric>`.
- Eficiência e reutilização.

## Diferenças Principais com Python:
- Tipagem estática obrigatória.
- Use `std::cout` e `std::cin` para I/O.
- Inclua headers como `<iostream>`.
- Compile com g++ ou similar.

Pratique compilando os códigos. Se precisar de ajuda com setup (instalar compilador), pergunte! Você está evoluindo bem! 🚀
public:
    // métodos
};
```

### Dicas de Estudo:
- Controle de acesso (public, private).

## Diferenças Principais com Python:
- Tipagem estática obrigatória.
- Use `std::cout` e `std::cin` para I/O.
- Inclua headers como `<iostream>`.
- Compile com g++ ou similar.

Pratique compilando os códigos. Se precisar de ajuda com setup (instalar compilador), pergunte! Você está evoluindo bem! 🚀