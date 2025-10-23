#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Digite o número de termos da sequência de Fibonacci: ";
    std::cin >> n;
    std::vector<int> fib;
    if (n > 0) fib.push_back(0);
    if (n > 1) fib.push_back(1);
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    std::cout << "Sequência de Fibonacci: ";
    for (int num : fib) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}