#include <iostream>
#include <vector>

class Fila {
private:
    std::vector<int> items;
public:
    void enqueue(int item) {
        items.push_back(item);
    }
    int dequeue() {
        if (!is_empty()) {
            int front = items.front();
            items.erase(items.begin());
            return front;
        }
        return -1; // erro
    }
    bool is_empty() {
        return items.empty();
    }
};

int main() {
    Fila fila;
    fila.enqueue(1);
    fila.enqueue(2);
    std::cout << "Dequeue: " << fila.dequeue() << std::endl;
    std::cout << "Vazia: " << (fila.is_empty() ? "Sim" : "Não") << std::endl;
    return 0;
}