#include <iostream>
#include <vector>
#include <chrono>

int busca_linear(const std::vector<int>& lst, int alvo) {
    for (size_t i = 0; i < lst.size(); ++i) {
        if (lst[i] == alvo) return i;
    }
    return -1;
}

int busca_binaria(const std::vector<int>& lst, int alvo) {
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (lst[mid] == alvo) return mid;
        else if (lst[mid] < alvo) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    std::vector<int> lista;
    for (int i = 0; i < 10000; i += 2) lista.push_back(i);
    int alvo = 5000;

    auto start = std::chrono::high_resolution_clock::now();
    int idx_linear = busca_linear(lista, alvo);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration_linear = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Linear: " << idx_linear << ", tempo: " << duration_linear.count() << " us" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    int idx_binaria = busca_binaria(lista, alvo);
    end = std::chrono::high_resolution_clock::now();
    auto duration_binaria = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Binária: " << idx_binaria << ", tempo: " << duration_binaria.count() << " us" << std::endl;

    return 0;
}