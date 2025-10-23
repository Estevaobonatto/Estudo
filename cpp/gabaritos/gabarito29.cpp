#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5};
    std::vector<int> quadrados(lista.size());
    std::transform(lista.begin(), lista.end(), quadrados.begin(), [](int x) { return x * x; });
    std::cout << "Quadrados: ";
    for (int num : quadrados) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}