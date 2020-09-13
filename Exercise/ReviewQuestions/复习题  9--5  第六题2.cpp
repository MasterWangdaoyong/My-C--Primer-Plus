//
//  复习题  9--5  第六题2.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
extern int x;
namespace
{
    int y = -4;
}
void another()
{
    cout << "another(): " << x << " , " << y << endl;
}
