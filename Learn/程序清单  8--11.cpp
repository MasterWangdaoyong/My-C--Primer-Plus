//
//  程序清单  8--11.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
template <typename T> //T为任何类型 --> 万能类型
void Swap(T &a, T &b); //此处注意类型函数，名称第一个字母有大小区分。
//此处一定要用大写，如用小写，调取函数时会出错。
int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i,j = " << i << j << endl;
    cout << "Using compiler-generated int swapper:\n";
    swap(i,j);   //此处注意类型函数，名称第一个字母有大小区分。
    cout << "Now i,j = " << i << j << endl;
    
    double x = 24.5;
    double y = 81.7;
    //char x = 'a';    //测试一
    //char y = 'b';
    //string x = "wangjianping";   //测试二 --> 结论：类型为万能的类型
    //string y = "wangdaoyong";
    cout << "x,y = " << x << ", " << y << endl;
    cout << "Using compiler-generated double swapper:\n";
    swap(x, y);
    cout << "Now x,y = " << x << " , " << y << endl;
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}












