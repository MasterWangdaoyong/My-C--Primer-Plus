
//
//  file 01.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/18.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include "coordin.hpp"
#include <cmath>

polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << " , angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
