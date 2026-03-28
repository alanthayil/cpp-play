#include <iostream>

int main() {
    int a = 5;
    std::cout << "Stack value: " << a << std::endl;

    int* p = new int(42);
    std::cout << "Heap value: " << *p << std::endl;
    delete p;

    return 0;
}