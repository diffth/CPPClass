#include "MyVector2D.h"

void MyVector2D::operator=(const MyVector2D& v)
{
    //this->x = v.x;
    //this->y = v.y;
    x = v.x;
    y = v.y;
}

MyVector2D& MyVector2D::operator+(const MyVector2D& v)
{
    //MyVector2D v_t(x + v.x, y + v.y);
    //return v_t;
    x += v.x;
    y += v.y;
    return *this;
}

float MyVector2D::operator*(const MyVector2D& v)
{
    return (x*v.x, y*v.y);
}
