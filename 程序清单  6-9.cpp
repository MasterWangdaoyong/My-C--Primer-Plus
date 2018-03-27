//  condit
//  程序清单  6-9.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Enter two integeers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;
    cout << " is " << c << endl;
    return 0;
}
