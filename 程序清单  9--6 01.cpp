//
//  程序清单  9--6 01.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
extern int tom;  //引用全局变量
static int dick = 10;   //本文件内变量声明
int harry = 200;   //全局变量

void remote_acces()
{
    using namespace std;
    cout << "remote_acces() reporte the following address:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick,";
    cout << &harry << " = &harry\n";
}



