//
// Created by fourt on 2/24/2022.
//

#ifndef POLY_RECTANGLE_H
#define POLY_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);

protected:
    double width =0;
    double height =0;
};


#endif //POLY_RECTANGLE_H
