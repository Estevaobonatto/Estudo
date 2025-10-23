# Estruturas de Código em C#

Olá! Agora que você está explorando C#, vamos revisar as principais estruturas de código, adaptadas para esta linguagem. C# é uma linguagem orientada a objetos, então algumas estruturas são similares ao Python, mas com sintaxe diferente. Vamos focar nas fundamentais: condicionais, loops, funções e classes.

## 1. Estruturas Condicionais: `if`, `else if` e `else`

### O que são?
Permitem executar blocos de código com base em condições booleanas.

### Sintaxe Básica:
```csharp
if (condição)
{
    // código se verdadeiro
}
else if (outra_condição)
{
    // código se outra_condição for verdadeira
}
else
{
    // código se nenhuma for verdadeira
}
```

### Exemplos nos Exercícios:

- **Exercício 3 (gabarito3.cs)**: Par ou ímpar.
  ```csharp
  if (num % 2 == 0)
  {
      Console.WriteLine("Par");
  }
  else
  {
      Console.WriteLine("Ímpar");
  }
  ```

### Dicas de Estudo:
- Use chaves `{}` sempre, mesmo para blocos de uma linha.
- Condições usam `==` para comparação (não `=`).
- Exercício: Adapte o exercício 5 para encontrar mínimo também.

## 2. Loops: `for`

### O que é?
Itera um número específico de vezes.

### Sintaxe Básica:
```csharp
for (inicialização; condição; incremento)
{
    // código
}
```

### Exemplos nos Exercícios:

- **Exercício 4 (gabarito4.cs)**: Fatorial.
  ```csharp
  for (int i = 1; i <= n; i++)
  {
      fatorial *= i;
  }
  ```

### Dicas de Estudo:
- Declare a variável no `for` se for local.
- Use `foreach` para coleções (como no exercício 5).
- Exercício: Implemente Fibonacci com `for`.

## 3. Loops: `while`

### O que é?
Executa enquanto a condição for verdadeira.

### Sintaxe Básica:
```csharp
while (condição)
{
    // código
}
```

### Dicas de Estudo:
- Cuidado com loops infinitos.
- Use para validação de entrada.

## 4. Funções: Métodos

### O que são?
Blocos de código reutilizáveis. Em C#, são chamados de métodos e ficam dentro de classes.

### Sintaxe Básica:
```csharp
static tipo_retorno NomeMetodo(parametros)
{
    // código
    return valor;
}
```

### Exemplos:
- Métodos em classes (veremos em exercícios avançados).

### Dicas de Estudo:
- Use `static` para métodos de classe.
- Parâmetros e retornos tipados.

## 5. Classes

### O que são?
Moldes para objetos.

### Sintaxe Básica:
```csharp
class NomeClasse
{
    // atributos e métodos
}
```

### Dicas de Estudo:
- Todo programa C# tem uma classe `Program` com `Main`.
- Use orientação a objetos para programas maiores.

## Diferenças Principais com Python:
- C# é tipado estaticamente: declare tipos (int, string).
- Use `Console` para I/O.
- Sintaxe mais verbosa, com chaves e ponto-e-vírgula.
- Compile antes de executar.

Pratique compilando e executando os exercícios. Se precisar de ajuda com setup (instalar .NET), me avise! Continue progredindo! 🚀