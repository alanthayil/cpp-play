#include <iostream>

struct Point {
    double x, y, z;
};

int main(){
    Point p{1.0, 2.0, 3.0};

    std::cout << "Point : ("
              << p.x << ", "
              << p.y << ", "
              << p.z << ")" << std:: endl;

    return 0;
}