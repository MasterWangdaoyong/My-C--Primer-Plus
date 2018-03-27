//
//  程序清单  8-1.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/21.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
inline double squ(double x){return x * x;}
//适合精简体函数，最好放在一行，如果函数体太过长做为内联函数就不太好了
int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;
    
    a = squ(5.0);
    b = squ(4.5 + 7.5);
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c ;
    cout << ", c squ = " << squ (c++ ) << "\n";
    cout << "Now c = " << c << endl;

    return 0;
}
