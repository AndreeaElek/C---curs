#ifndef TV_H
#define TV_H

#pragma once

class TV
{
public:
    TV();
    TV(double width, double height);
    ~TV();

    double arieTV();

private:
    double m_width, m_height;

};

#endif