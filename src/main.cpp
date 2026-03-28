#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a;

    std::cout << "a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Pointer value: " << ptr << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;

    return 0;
}