//
//  a.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/18.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef coordin_hpp
#define coordin_hpp

#include <iostream>
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif
