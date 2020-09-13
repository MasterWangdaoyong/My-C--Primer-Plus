//
//  程序清单 3-8   floatnum.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/11/21.
//  Copyright © 2016年 王道勇. All rights reserved.
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    
    cout << "tub = " << tub << endl;
    cout << "A million tubs = " << million * tub ;
    cout << "\nTen million tubs = ";
    cout << 10 * million * tub << endl;
    
    cout << "mint = " << mint <<endl << "A million mints = ";
    cout << million * mint << endl;
    return 0;
    
}