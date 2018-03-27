//
//  程序清单  9--5 00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
double warming = 0.3;
void update(double dt);
void local();

int main()
{
    cout << "Global warming is " << warming << " degress.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degress.\n";
    local();
    cout << "Global warming is " << warming << " degress.\n";

    return 0;
}
