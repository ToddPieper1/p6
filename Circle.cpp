//
// Created by fourt on 2/24/2022.
//

#include "Circle.h"
Circle::Circle(double radius) {
    Circle::radius=radius;
}

double Circle::area() const {
    return radius*radius*3.14;
}
