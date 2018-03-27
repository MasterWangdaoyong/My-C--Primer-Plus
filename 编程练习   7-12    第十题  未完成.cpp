//
//  编程练习   7-12    第十题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/24.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
double add(double x, double y);
double clate(double x, double y, double (*add));


int main()
{
    
    int x,y;
    x = 3;
    y = 4;
    double z = clate(x, y,add);
    cout << z;
    return 0;
}

double clate(double (*add)(double x,double y))
{
    return (add(x,y));
}

double add(double x, double y)
{
    return x + y;
}
