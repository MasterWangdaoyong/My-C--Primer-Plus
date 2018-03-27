//
//  程序清单  9--6 00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
int tom = 3;       //全局外部
int dick = 10;     //全局外部
static int harry = 300;  //本文件内使用

void remote_acces();

int main()
{
    using namespace std;
    cout << "main() reports the following address:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick,";
    cout << &harry << " = &harry\n";
    remote_acces();
    return 0;
}





