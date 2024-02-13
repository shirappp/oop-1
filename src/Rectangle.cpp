#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int length, int width){
    length=length;
    width=width;
};

int Rectangle::getLength(){ 
    
    return length;
};

int Rectangle::getWidth(){ 
    
    return width;
};

int Rectangle::square(){
    return this->getLength() * this->getWidth();
};