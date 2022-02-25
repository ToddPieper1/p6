//
// Created by fourt on 2/24/2022.
//
#include <iostream>
#include "Rectangle.h"
Rectangle::Rectangle(double width, double height) {
    Rectangle::width=width;
    Rectangle::height=height;
}

double Rectangle::area() const {
    return width * height;
}
