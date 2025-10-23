#include <iostream>
#include <vector>

int main() {
    std::vector<int> lista = {1, 3, 5, 7, 9, 11, 13};
    int alvo;
    std::cout << "Digite o número a buscar: ";
    std::cin >> alvo;
    int left = 0, right = lista.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (lista[mid] == alvo) {
            std::cout << "Encontrado na posição " << mid << std::endl;
            return 0;
        } else if (lista[mid] < alvo) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    std::cout << "Não encontrado" << std::endl;
    return 0;
}