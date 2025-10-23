#include <iostream>
#include <vector>

void inverter_recursivo(std::vector<int>& lst, size_t start, size_t end) {
    if (start >= end) return;
    std::swap(lst[start], lst[end]);
    inverter_recursivo(lst, start + 1, end - 1);
}

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5};
    inverter_recursivo(lista, 0, lista.size() - 1);
    std::cout << "Invertida: ";
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}