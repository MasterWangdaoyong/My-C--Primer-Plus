//
//  a.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/18.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "coordin.hpp"
#include <iostream>
using namespace std;
int main()
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit) ";
    }
    cout << "Bye!\n";
    return 0;
}
