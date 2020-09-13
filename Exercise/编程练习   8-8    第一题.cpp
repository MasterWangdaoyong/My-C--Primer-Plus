//
//  编程练习   8-8    第一题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//
//函数的重载与调用函数次数为此次打印数的次数

#include <iostream>
using namespace std;

void Show_char(const char * a);
void Show_char(const char * a, int &x);

int main()
{
    cout << "---程序运行中---" << endl;
    cout << "---函数的重载与调用函数次数为此次打印数的次数---" << endl;
    int x = 1;
    char * c = "abc";
    Show_char(c,x);
    Show_char(c,x);
    Show_char(c,x);
    Show_char(c);
    return 0;
}
void Show_char(const char * a)
{
    cout << "one line -->\n";
    cout << a << endl;
}

void Show_char(const char * a, int &x)
{
    cout << "第 " << x << " 次调用该函数 ---> \n";
    for (int c = 0; c < x; c++)
    {
        cout << a << endl;
    }
    x++;
}
//把调用次数写在main函数里面，调用函数时使用引用来修改它






