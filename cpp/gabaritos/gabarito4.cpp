#include <iostream>

int main() {
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    std::cout << "O fatorial de " << n << " é " << fatorial << std::endl;
    return 0;
}