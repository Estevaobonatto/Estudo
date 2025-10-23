#include <iostream>
#include <vector>

void merge(std::vector<int>& lst, int left, int mid, int right) {
    std::vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (lst[i] <= lst[j]) {
            temp[k++] = lst[i++];
        } else {
            temp[k++] = lst[j++];
        }
    }
    while (i <= mid) temp[k++] = lst[i++];
    while (j <= right) temp[k++] = lst[j++];
    for (int p = 0; p < k; ++p) lst[left + p] = temp[p];
}

void merge_sort(std::vector<int>& lst, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(lst, left, mid);
        merge_sort(lst, mid + 1, right);
        merge(lst, left, mid, right);
    }
}

int main() {
    std::vector<int> lista = {38, 27, 43, 3, 9, 82, 10};
    merge_sort(lista, 0, lista.size() - 1);
    std::cout << "Ordenada: ";
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}