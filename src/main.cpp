#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"

int main()
{
    Rectangle rectangle(7.0, 5.0);
    std::cout << "Length: " << rectangle.getLength() << std::endl;

    std::cout << "Width: " << rectangle.getWidth() << std::endl;

    std::cout << "Square: " << rectangle.square() << std::endl;

    return 0;

}