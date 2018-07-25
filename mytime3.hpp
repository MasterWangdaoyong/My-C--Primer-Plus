//
//  mytime3.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/25.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef mytime3_hpp
#define mytime3_hpp

#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int minutes = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator + (const Time & t) const;
    Time operator - (const Time & t) const;
    Time operator * (double n) const;
    friend Time operator * (double m, const Time & t)
    { return t * m;}
    friend std::ostream & operator << (std::ostream & os, const Time & t);
};

#endif /* mytime3_hpp */
