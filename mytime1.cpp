//
//  mytime1.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/15.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "mytime1.hpp"
#include <iostream>

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h , int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}


