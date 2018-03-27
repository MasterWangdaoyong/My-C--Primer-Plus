//
//  程序清单  7--9.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
unsigned int c_in_str(const char * str, char ch);

int main()
{
    using namespace std;
    char num[15] = "minimum";
    char * wail = "ululate";
    
    unsigned int ms = c_in_str(num, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << num << endl;
    cout << us << " u characters in " << wail << endl;
    
    
    return 0;
}


unsigned int c_in_str(const char * str, char ch)
{
    unsigned int x = 0;
    while (*str)
    {
        if(*str == ch)
            x++;
        str++;
    }
    return x;
}
