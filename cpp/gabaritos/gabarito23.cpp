#include <iostream>
#include <vector>

class Pilha {
private:
    std::vector<int> items;
public:
    void push(int item) {
        items.push_back(item);
    }
    int pop() {
        if (!is_empty()) {
            int top = items.back();
            items.pop_back();
            return top;
        }
        return -1; // erro
    }
    bool is_empty() {
        return items.empty();
    }
};

int main() {
    Pilha pilha;
    pilha.push(1);
    pilha.push(2);
    std::cout << "Pop: " << pilha.pop() << std::endl;
    std::cout << "Vazia: " << (pilha.is_empty() ? "Sim" : "Não") << std::endl;
    return 0;
}