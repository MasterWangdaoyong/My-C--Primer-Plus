//
//  编程练习   8-8    第三题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//小写字符转换成大写字符 参考书页179 char 类型函数 和书页85 string长度计算

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void min_max(string &a);
int main()
{
    cout << "---小写字符转换成大写字符---\n程序运行中...\n";
    string a;
    min_max(a);
    cout << "程序已终止!\n";
    return 0;
}
void min_max(string &a)
{
        while (a != "q")
    {
        cout << "Enter a string (q to quit): \n";
        getline(cin,a);
        if (a == "q")
            break;
        int num = a.size();
        //string 长度计算
        string c;
        for (int x = 0; x < num; ++x)
        {
            if (islower(a[x]))
            {//测试字符是否是小写
                c = toupper(a[x]);
                //把字符转成字符串  char --> string
                cout << c;
            }
            else if (!islower(a[x]))
                cout << a[x];
        }
        cout << endl;
    }
    
}






