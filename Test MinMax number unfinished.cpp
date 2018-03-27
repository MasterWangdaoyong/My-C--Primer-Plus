//
//  Test MinMax number.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/10.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    const int x[6] = {1,3,30,5,20,8};
    int c = 0;
    for (int i = 0; i < 5; i++)
        if (x[i] < x[i+1])
            c = x[i+1];
        else
            c = x[i];
    cout << c << endl;
    
    
    return 0;
}
