//
//  程序清单 3-14    typecast.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/11/27.
//  Copyright © 2016年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    
    
    // the following statement adds the values as double;
    // then converts the result to int
    
    auks = 19.99 + 11.99;
    
    // these statement add values as int
    bats = (int) 19.99 + 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}
