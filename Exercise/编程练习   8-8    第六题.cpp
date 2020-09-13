//
//  编程练习   8-8    第六题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/16.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
const int Size = 5;

template <typename T>
T maxn(const T c[], T z);

template <typename T> T maxn(T & a, T & b);

int main()
{
    int x[Size] = {1,3,8,5,6};
    double xx[Size] = {1.1, 3.1, 8.1, 5.1, 6.1};
    char name[5][10] = {"jian","ping","wang","dao","yong"};
    char * nameid = &name[5][10];
    int zz = 0;
    double abc = 0;
    cout << "int array minmax " << maxn(x, zz) << endl;
    cout << "int array minmax " << maxn(xx, abc) << endl;
    return 0;
}

template <typename T>
T maxn(const T c[], T z)
{
    int x;
    for (x = 0; x+1 != Size; x++)
        z = c[x] > c[x+1] ? c[x] : c[x+1];
    //测试存在问题，未能正确反回数组中的最大数！！
    return z;
}

template <typename T> T & maxn(T & a, T & b)
{
    for (int x = 0; x+1 != Size; x++)
        b = a[x] > a[x+1] ? a[x] : a[x+1];
    //测试存在问题，未能正确反回数组中的最大数！！
    return b;
    
}
