#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Shape.h"
using namespace std;

void printArea(const Shape& shape) {
    std::cout << shape.area() << "\n";
}


int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 }; // pi is estimated to be 3.14
    printArea(r1);
    printArea(s1);
    printArea(c1);
}

