//
//  main.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//
//文件一
#include <iostream>
#include "golf.hpp"

int main()
{
    golf abc;
    using namespace std;
    char ddd[Len];
    cout << "Please enter your name: ";
    cin.get(ddd, Len);
    char * dddd = ddd;
    setgolf(abc, dddd, 20);
    int x = setgolf(abc);
    cout << x;
    showgolf(abc);
    return 0;
}
