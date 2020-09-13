//
//  编程练习 6-11   第五题.cpp
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
    double x;
    cout << "程序运行中...\n本程序计算个人所得税，请输入个人收入：\n";
    cin >> x;
    while (x > 0 && !isdigit(x))
    {
    
        if (x <= 5000)
            cout << "小于等于5000不收税。\n";
        else if (x>5000 && x <= 15000)
            cout << "个人所得税：" << x * 0.1 << endl;
        else if (x>15000 && x <=35000)
            cout << "个人所得税：" << x * 0.15 << endl;
        else if (x>35000)
            cout << "个人所得税：" << 10000*0.1 + 20000*0.15 + (x-35000)*0.2 << endl;
        cout << "请重新输入： ";
        cin >> x;
    }
    return 0;
}
