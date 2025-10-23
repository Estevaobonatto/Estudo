#include <iostream>
#include <vector>

int contar_aninhado(const std::vector<std::vector<int>>& lst, int alvo, size_t index = 0) {
    if (index == lst.size()) return 0;
    int count = 0;
    for (int num : lst[index]) {
        if (num == alvo) ++count;
    }
    return count + contar_aninhado(lst, alvo, index + 1);
}

int main() {
    std::vector<std::vector<int>> lista = {{1, 2}, {2, 3}, {2}};
    int alvo = 2;
    std::cout << "Contagem de " << alvo << ": " << contar_aninhado(lista, alvo) << std::endl;
    return 0;
}