//
//  mytime2.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/15.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef mytime2_hpp
#define mytime2_hpp

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    void Show() const;
};

#endif /* mytime2_hpp */
