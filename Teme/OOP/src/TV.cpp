#include "TV.h"


TV::TV(double width, double height):
    m_width(width),
    m_height(height)
{

}

TV::TV():
    m_width(0.0),
    m_height(0.0)
{

}

TV::~TV()
{

}

double TV::arieTV()
{
    double arie = m_width * m_height;
    return arie;
}