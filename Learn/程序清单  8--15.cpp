//
//  程序清单  8--15.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}
int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
};
int main()
{
    int m = 10;
    int n = -30;
    double x = 15.5, y = 25.9;
    
    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl;
    cout << lesser<int>(x, y) << endl;
    
    
    return 0;
}


