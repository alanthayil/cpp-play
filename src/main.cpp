#include <iostream>

void incrementByValue(int x) {
    x = x + 1;
}

void incrementByReference(int& x) {
    x = x + 1;
}

int main() {
    int a = 5;

    incrementByValue(a);
    std::cout << "After value: " << a << std::endl;

    incrementByReference(a);
    std::cout << "After reference: " << a << std::endl;

    return 0;
}