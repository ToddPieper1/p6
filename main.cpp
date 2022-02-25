#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Shape.h"
using namespace std;

template<typename T>
void printArea(const T& shape) {
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

//Part 6
// 1) The static polymorphism is the clear winner for ease of implementation, it's simply less lines of code.
// The issuse with dynamic is the excess need to have to declare the inheritance in each class, and then have to override the function
// Which we showed to be completely irrelevant with a singular extra line in the main.cpp making a template function.
// Why bother doing all the extra work in a bunch of side headers and cpp files when you can just do a bit extra in main.
//
// 2) I assume this is the case mostly because of what I stated for 1), it's easier and less lines of code. I'm not sure
// how any difference would affect runtime, if at all, and so to me it has to be a user oriented preference which makes
// sense considering we scrapped the work for dynamic polymorphism for a seemingly easier static polymorphism experience