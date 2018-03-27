//
//  程序清单  7--1.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/5.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void simple();      //函数原型

int main()
{
    std::cout << "mian() willl call simple() function:\n";
    simple();       //调用函数
    std::cout << "mian() is finished with the simple() function.\n";
    return 0;
}

void simple()    //定义函数：需要怎么样的运算与返回
{
    
    std::cout << "I'm but a simple function.\n";
}
