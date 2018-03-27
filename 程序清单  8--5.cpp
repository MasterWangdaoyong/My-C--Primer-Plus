//
//  程序清单  8--5.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/21.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
double cube(double a);
double refcube(double &ra);

int main()
{
    using namespace std;
    double x = 3;
    
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}
double cube(double a)
{
    a *= a * a;
    return a;
}
double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}








