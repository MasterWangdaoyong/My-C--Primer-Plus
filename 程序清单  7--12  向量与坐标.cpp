
//
//  程序清单  7--12.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cmath>

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

polar rect_to_polar(rect xy);
void show_polar (polar xy);

int main()
{
    using namespace std;
    rect ice;
    polar npc;
    
    cout << "Enter the x and y value: ";
    while (cin >> ice.x >> ice.y)
    {
        npc = rect_to_polar(ice);
        show_polar(npc);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xy)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt (xy.x * xy.x + xy.y * xy.y);
    answer.angle = atan2(xy.y, xy.x);
    return answer;
}

void show_polar (polar xy)
{
    using namespace std;
    const double ad_to_deg = 57.295;
    
    cout << "Distance = " << xy.distance;
    cout << " ,angle = " << xy.angle * ad_to_deg;
    cout << " degrees.\n";
}














