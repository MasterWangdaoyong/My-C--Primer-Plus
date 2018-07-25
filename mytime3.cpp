//
//  mytime3.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/25.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "mytime3.hpp"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m)
{
    hours = minutes = 0;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.hours / 60;
    sum.minutes %= 60;
    
    return sum;
}

Time Time::operator-(const Time &t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes = hours * n * 60 + minutes * n;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    // long to int !!!
    return result;
}

std::ostream & operator << (std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}




