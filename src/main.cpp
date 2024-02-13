#include <iostream>
#include "Rectangle.cpp"
#include "Rectangle.h"

int main()
{
    Rectangle rectangle(5,5);
    int square = rectangle.square();
    std::cout<<square<<std::endl;
    return 0;

}