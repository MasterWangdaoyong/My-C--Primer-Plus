//
//  mytime0.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/15.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef mytime0_hpp
#define mytime0_hpp

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
    Time Sum(const Time & t) const;
    void Show() const;
    
};
#endif /* mytime0_hpp */
