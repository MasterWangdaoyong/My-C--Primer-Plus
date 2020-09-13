//
//  编程练习 6-11   第一题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/4.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (islower(ch))
            cout << char (toupper(ch)) << endl;
        else
            cout << char (tolower(ch)) << endl;
        cin.get(ch);
    }
    
    
    return 0;
}

/*1 isalnum();   如果字母与数字   返回1
2 isspace();   如果是空格，换行 \n 等  返回1
3 isupper();   如果是大写字母    返回1
4 islower();   如果是小写字母    返回1
5 isdigit();   如果是0-9        返回1
6 isxdigit();  如果是十进制      返回1
7 isgraph();   除空格以外的打印字符   返回1
8 isprint();   如果是打印字符    返回1
9 tolower();    如果是大写 就返回小写 不然返回数值
10 toupper();   如果是小写 返回大写 不然返回数值
11 isalpha();    如果是字母     返回1
12 ispunct();    如果是标点     返回1
13 iscntrl();    如果是控制字符   返回1*/
