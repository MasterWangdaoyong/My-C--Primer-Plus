//
//  程序清单  7--13.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/7.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cmath>

struct xy
{
    double x;
    double y;
};

struct npc
{
    double distance;
    double angle;
};

void show_npc(const npc * npc);
void npc_dis_ang(const xy * xandy, npc * anpc);

int main()
{
    using namespace std;
    xy * xandy;
    npc * anpc;
    
    cout << "Please enter x and y: ";
    while (cin >> xandy->x >> xandy->y)   //?
    {
        npc_dis_ang(xandy, anpc);
        show_npc(anpc);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    
    return 0;
}

void show_npc(const npc * npc)
{
    using namespace std;
    const double Rad_to_deg = 57.295;
    cout << "Npc distance = " << npc->distance << endl;
    cout << "Npc angle = " << npc->angle * Rad_to_deg << endl;
}


void npc_dis_ang(const xy * xandy, npc * anpc)   //新建npc结构放在里面应该会好些，在
{                                    //int main中条理清楚，减少错误???????!!!!!!!!
    anpc->distance = sqrt(xandy->x * xandy->x + xandy->y * xandy->y);
    anpc->angle = atan2(xandy->y, xandy->x);
}






