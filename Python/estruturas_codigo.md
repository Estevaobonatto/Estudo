# Estruturas de Código Usadas nos Exercícios

Olá! Como seu mentor em Ciência da Computação, vou explicar as principais estruturas de código que aparecem nos exercícios deste estudo. Vamos focar nas estruturas fundamentais em Python, com exemplos práticos dos gabaritos. Lembre-se: a prática é essencial para consolidar o conhecimento. Vamos passo a passo!

## 1. Estruturas Condicionais: `if`, `elif` e `else`

### O que são?
As estruturas condicionais permitem que o programa tome decisões com base em condições verdadeiras ou falsas. Elas avaliam expressões booleanas e executam blocos de código específicos.

### Sintaxe Básica:
```python
if condição:
    # código se condição for verdadeira
elif outra_condição:
    # código se outra_condição for verdadeira
else:
    # código se nenhuma condição for verdadeira
```

### Exemplos nos Exercícios:

- **Exercício 5 (gabarito5.py)**: Encontrar o maior número em uma lista.
  ```python
  for num in numeros:
      if num > maximo:
          maximo = num
  ```
  Aqui, o `if` compara cada número com o máximo atual e atualiza se necessário.

- **Exercício 7 (gabarito7.py)**: Verificar se um número é primo.
  ```python
  if n <= 1:
      return False
  for i in range(2, int(math.sqrt(n)) + 1):
      if n % i == 0:
          primo = False
          break
  if primo:
      return True
  ```
  Múltiplos `if` para verificar condições de primalidade.

- **Exercício 39 (gabarito39.py)**: Jogo de pedra-papel-tesoura.
  ```python
  if usuario == computador:
      print("Empate!")
  elif (usuario == 'pedra' and computador == 'tesoura') or \
       (usuario == 'papel' and computador == 'pedra') or \
       (usuario == 'tesoura' and computador == 'papel'):
      print("Você ganhou!")
  else:
      print("Computador ganhou!")
  ```
  Uso de `elif` para múltiplas condições encadeadas.

### Dicas de Estudo:
- Sempre teste as condições com valores extremos (bordas).
- Use operadores lógicos (`and`, `or`, `not`) para combinar condições.
- Exercício: Modifique o exercício 5 para encontrar também o menor número.

## 2. Loops: `for`

### O que é?
O loop `for` itera sobre uma sequência (lista, string, range) ou qualquer objeto iterável, executando um bloco de código para cada item.

### Sintaxe Básica:
```python
for variável in sequência:
    # código para cada item
```

### Exemplos nos Exercícios:

- **Exercício 4 (gabarito4.py)**: Calcular fatorial.
  ```python
  for i in range(1, n+1):
      fatorial *= i
  ```
  Itera de 1 a n, multiplicando o fatorial.

- **Exercício 6 (gabarito6.py)**: Contar palavras em um texto.
  ```python
  for palavra in palavras:
      if palavra in contagem:
          contagem[palavra] += 1
      else:
          contagem[palavra] = 1
  ```
  Itera sobre palavras, atualizando contadores.

- **Exercício 9 (gabarito9.py)**: Bubble sort.
  ```python
  for i in range(n):
      for j in range(0, n-i-1):
          if numeros[j] > numeros[j+1]:
              numeros[j], numeros[j+1] = numeros[j+1], numeros[j]
  ```
  Loop aninhado para ordenação.

- **Exercício 14 (gabarito14.py)**: Contar vogais (com list comprehension).
  ```python
  vogais = sum(1 for char in string.lower() if char in 'aeiou')
  ```
  Loop implícito em uma linha.

### Dicas de Estudo:
- Use `range()` para loops numéricos.
- Loops aninhados aumentam complexidade; teste com pequenos valores.
- Exercício: Implemente um loop `for` para somar os primeiros 100 números pares.

## 3. Loops: `while`

### O que é?
O loop `while` executa um bloco de código enquanto uma condição for verdadeira. É útil quando não sabemos antecipadamente quantas iterações serão necessárias.

### Sintaxe Básica:
```python
while condição:
    # código enquanto condição for verdadeira
```

### Exemplos nos Exercícios:

- **Exercício 11 (gabarito11.py)**: Jogo de adivinhação.
  ```python
  while palpite != numero_secreto:
      palpite = int(input("Digite seu palpite: "))
      if palpite < numero_secreto:
          print("Muito baixo!")
      elif palpite > numero_secreto:
          print("Muito alto!")
      else:
          print("Parabéns!")
  ```
  Continua até o palpite correto.

- **Exercício 15 (gabarito15.py)**: Algoritmo de Euclides para MDC.
  ```python
  while b != 0:
      a, b = b, a % b
  return a
  ```
  Itera até b ser zero.

- **Exercício 31 (gabarito31.py)**: Jogo da forca.
  ```python
  while '_' in descobertas and tentativas > 0:
      # lógica do jogo
  ```
  Continua enquanto houver letras não descobertas e tentativas.

### Dicas de Estudo:
- Cuidado com loops infinitos! Sempre garanta que a condição mude.
- Use para validação de entrada do usuário.
- Exercício: Converta o fatorial do exercício 4 para usar `while` em vez de `for`.

## 4. Funções: `def`

### O que são?
Funções são blocos de código reutilizáveis que realizam tarefas específicas. Elas ajudam a organizar o código, evitar repetição e melhorar a legibilidade.

### Sintaxe Básica:
```python
def nome_funcao(parametros):
    # código da função
    return valor  # opcional
```

### Exemplos nos Exercícios:

- **Exercício 30 (gabarito30.py)**: Calculadora simples.
  ```python
  def soma(a, b):
      return a + b

  def subtracao(a, b):
      return a - b
  # etc.
  ```
  Funções para operações matemáticas.

- **Exercício 33 (gabarito33.py)**: Fatorial recursivo.
  ```python
  def fatorial(n):
      if n in cache:
          return cache[n]
      if n == 0:
          return 1
      cache[n] = n * fatorial(n-1)
      return cache[n]
  ```
  Função recursiva com memoização.

- **Exercício 34 (gabarito34.py)**: Crivo de Eratóstenes.
  ```python
  def crivo(n):
      lista = [True] * (n+1)
      for i in range(2, int(n**0.5) + 1):
          if lista[i]:
              for j in range(i*i, n+1, i):
                  lista[j] = False
      return [i for i in range(2, n+1) if lista[i]]
  ```
  Função que retorna primos.

### Dicas de Estudo:
- Sempre documente funções com docstrings.
- Use parâmetros para tornar funções flexíveis.
- Exercício: Crie uma função que verifica se uma palavra é palíndromo (exercício 13).

## 5. Classes: `class`

### O que são?
Classes são moldes para criar objetos. Elas encapsulam dados (atributos) e comportamentos (métodos), permitindo programação orientada a objetos.

### Sintaxe Básica:
```python
class NomeClasse:
    def __init__(self, parametros):
        # inicialização
    
    def metodo(self):
        # comportamento
```

### Exemplos nos Exercícios:

- **Exercício 17 (gabarito17.py)**: Classe Retângulo.
  ```python
  class Retangulo:
      def __init__(self, largura, altura):
          self.largura = largura
          self.altura = altura
      
      def area(self):
          return self.largura * self.altura
  ```
  Classe simples com atributos e método.

- **Exercício 23 (gabarito23.py)**: Pilha.
  ```python
  class Pilha:
      def __init__(self):
          self.itens = []
      
      def push(self, item):
          self.itens.append(item)
      
      def pop(self):
          return self.itens.pop()
  ```
  Estrutura de dados com métodos.

- **Exercício 37 (gabarito37.py)**: Conta bancária.
  ```python
  class Conta:
      def __init__(self):
          self.saldo = 0
      
      def depositar(self, valor):
          self.saldo += valor
      
      def sacar(self, valor):
          if self.saldo >= valor:
              self.saldo -= valor
              return True
          return False
  ```
  Classe com lógica condicional nos métodos.

### Dicas de Estudo:
- `__init__` é o construtor; sempre defina-o.
- Use `self` para referenciar atributos e métodos da instância.
- Exercício: Estenda a classe Retângulo para incluir perímetro.

## 6. Tratamento de Exceções: `try` e `except`

### O que são?
Permitem lidar com erros que podem ocorrer durante a execução, evitando que o programa pare abruptamente.

### Sintaxe Básica:
```python
try:
    # código que pode gerar erro
except TipoErro:
    # tratamento do erro
```

### Exemplo nos Exercícios:

- **Exercício 22 (gabarito22.py)**: Leitura de arquivo.
  ```python
  try:
      with open('arquivo.txt', 'r') as f:
          conteudo = f.read()
  except FileNotFoundError:
      print("Arquivo não encontrado.")
  ```
  Trata erro se o arquivo não existir.

### Dicas de Estudo:
- Use para operações de I/O (arquivos, rede).
- Não abuse; exceções são para situações excepcionais.
- Exercício: Adicione tratamento de erro ao exercício 4 para números negativos.

## Conclusão

Essas são as estruturas principais encontradas nos exercícios. Cada uma tem seu propósito:

- **Condicionais**: Para decisões lógicas.
- **Loops**: Para repetição controlada.
- **Funções**: Para modularidade e reutilização.
- **Classes**: Para modelar objetos complexos.
- **Exceções**: Para robustez.

Pratique implementando variações desses conceitos. Que tal refatorar um exercício antigo usando uma nova estrutura? Continue explorando e me pergunte se tiver dúvidas. Você está no caminho certo! 🚀