//
//  程序清单  6-1.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    
    int spaces = 0;
    int total = 0;
    
    cin.get(ch);
    
    while(ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces. " << total;
    cout << " characters total in sentence\n";
    return 0;
}
