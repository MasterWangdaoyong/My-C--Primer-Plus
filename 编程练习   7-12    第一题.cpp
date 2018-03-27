
//
//  编程练习   7-12    第一题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/19.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
float tiaohe_sqrt(float xx, float yy);
int main()
{
    using namespace std;
    float x,y;
    cout << "Please enter two number(q is quit) : ";
    while (cin >>x>>y && (x != 0 || y != 0))
    {
        float z_a = tiaohe_sqrt(x, y);
        cout << " 调和平均数等于 " << z_a << endl;
        cout << "Please enter two number(q is quit) : ";
        
    }
    return 0;
}


float tiaohe_sqrt(float xx, float yy)
{
    float z_b;
    z_b = 2.0 * xx * yy / (xx+yy);
    return z_b;
}

















