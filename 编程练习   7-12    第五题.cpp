//
//  编程练习   7-12    第五题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/26.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;

void jiecheng(int n);


int main()
{
    int x;
    cout << "---阶乘运算程序---\n程序运行中...\n";
    cout << "请输入需要计算的阶乘数(整数)，按”q“退出输入...\n";
    while (cin>>x)
    {
        cout <<"的阶乘分别为：\n";
        jiecheng(x);
        cout << "请输入需要计算的阶乘数(整数)，按”q“退出输入...\n";
    }
    cout << "---Done---\n";
    return 0;
}

void jiecheng(int n)     //第3后 循环 新开始 此时的 n = n-1了
{//递归函数
    {            //2
        if (n*(n-1) == 0)
        {
            cout << 0 << "*" << 0-1 << " -> ";
            cout << 1 << endl;
        }
        else
        {
            cout << n << "*" << n-1 << " -> ";
            cout << n*(n-1) <<endl;
        }
    }
    if ( n>0)   //1
        jiecheng(n-1);  //3
    //未写反向语段
}






