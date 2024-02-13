#include <iostream>



class Rectangle
{
private:    
    double length;
    double width;
public:
    Rectangle(double l, double w);
    double square() const;
    double getLength() const;
    double getWidth() const;
};
