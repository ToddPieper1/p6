//
// Created by fourt on 2/24/2022.
//

#ifndef POLY_SQUARE_H
#define POLY_SQUARE_H


#include "Shape.h"

class Square : public Shape{
public:
    Square(double side);

protected:
    double side;
};


#endif //POLY_SQUARE_H
