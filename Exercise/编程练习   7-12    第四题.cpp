//
//  编程练习   7-12    第四题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/19.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
long double pro(unsigned number, unsigned pick);
int main()
{
    cout << "---获奖的机率运算程序---\n程序运行中...\n";
    double total;
    long double jilue = 0.0;
    long double jilue_01 = 0.0;
    for (int x = 0; x < 5; x++)
    {
        cout << "请输入五个一区间号码：\n";
        cin >> total;
        if(total > 47)
        {
            cin.clear();
            cout << "请重新输入选中号码，选中号码需小于或等于47的数字\n";
            cin >> total;
        }
        cout << "You have one chance in ";
        jilue = pro(total, 5);
        cout << jilue << " of win\n";
        jilue += jilue;
    }
    cout << "前一区号码获奖机率为：" << jilue << endl;
    
    cout << "请输入一个二区间号码：\n";
    cin >> total;
    if(total > 27)
    {
        cin.clear();
        cout << "请重新输入选中号码，选中号码需小于或等于27的数字\n";
        cin >> total;
    }
    cout << "You have one chance in ";
    jilue_01 = pro(total, 1);
    cout << jilue_01 << " of win\n";
    
    cout << "所有号码获奖的机率为：" << jilue * jilue_01 << " 分之一。\n";
    cout << "---Done---\n";
    return 0;
}

long double pro(unsigned number, unsigned pick)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    
    for (n=number,p=pick;p>0;n--,p--)
        result = result * n /p;
    return result;
}








