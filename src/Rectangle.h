#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>



class Rectangle
{

    int length;
    int width;
public:
    Rectangle(int length, int width);
    int square();
    int getLength();
    int getWidth();
};
#endif