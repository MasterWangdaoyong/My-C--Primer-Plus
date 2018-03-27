//
//  编程练习 5-9   第二题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/4/10.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <array>
const int Airsize = 101;
int main()
{
    using namespace std;
    array<long double, Airsize> factory;
    factory[1] = factory[0] = 1U;
    for (int i = 2; i < Airsize; i++)
        factory[i] = i * factory[i-1];
    for (int i = 0; i < Airsize; i++)
        cout << i << " ! = " << factory[i] << endl;
    
    
    
    return 0;
}
