//
// Created by fourt on 2/24/2022.
//

#ifndef POLY_CIRCLE_H
#define POLY_CIRCLE_H
#include "Shape.h"

class Circle : public Shape{
public:
    Circle(double radius);

protected:
    double radius;
};


#endif //POLY_CIRCLE_H