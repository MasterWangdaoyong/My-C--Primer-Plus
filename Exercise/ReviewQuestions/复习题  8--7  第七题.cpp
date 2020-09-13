//
//  复习题  8--7  第七题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/10.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T1, typename T2>
//不考虑后续兼容使用typename 否则用class
auto min_max(T1 &a, T2 &b) -> decltype(a > b ? a : b)
{                   //decltype 只是测试返回类型，不是函数调用
    return a > b ? a : b;   //如果a大于b，就返回a；否则如果a小于b，就返回b
}
int main()
{
    long long a = 31;
    double b = 14;
    //如果两个类型不同，要分配两个泛型T1 T2
    cout << min_max(a, b) << endl;
    return 0;
}
