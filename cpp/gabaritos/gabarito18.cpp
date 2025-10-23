#include <iostream>
#include <vector>

int soma_recursiva(const std::vector<int>& lst, size_t index = 0) {
    if (index == lst.size()) return 0;
    return lst[index] + soma_recursiva(lst, index + 1);
}

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5};
    std::cout << "Soma: " << soma_recursiva(lista) << std::endl;
    return 0;
}