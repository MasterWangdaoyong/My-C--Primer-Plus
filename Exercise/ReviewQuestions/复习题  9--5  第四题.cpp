//
//  复习题  9--5  第四题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
//using 的声明使用例子
using std::cin;
using std::cout;
using std::endl;
int main()
{
    double x;
    cout << "Enter value: ";
    while (!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}

