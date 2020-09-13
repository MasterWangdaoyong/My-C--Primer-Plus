//
//  复习题 6-10 第二题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/2.
//  Copyright © 2017年 王道勇. All rights reserved.
//



#include <iostream>
int main()
{
    using namespace std;
    
    char ch;
    
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ch+1;                   //结果：转形  从char 转到int
        cin.get(ch);
    }
    
    cout << sizeof(ch) << endl;
    
    
    return 0;
}

