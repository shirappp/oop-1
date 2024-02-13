#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::getLength() const { 
    
    return length;
};

double Rectangle::getWidth() const { 
    
    return width;
};

double Rectangle::square() const {
    return width * length;
};