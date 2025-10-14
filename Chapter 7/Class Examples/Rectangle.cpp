#include "Rectangle.h"

Rectangle::Rectangle(const int& length, int width)
{
    int m_length;

    length = 2;
    m_Length = length;
    m_Width = width;
    this.m_Length = length;;
}

int Rectangle::getArea() const
{
    return m_length * m_width;

}
void Rectangle::setWidth(int width)
{
    m_Width = width;

}