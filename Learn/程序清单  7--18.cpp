//
//  程序清单  7--18.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/12.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

double betsy(int lns);
double pam(int lns);
void estimate(int lines, double (*pf)(int));
//注意 (*pf)  是指向函数地址的指针，代表整个函数；   不是返回该函数运算后结果的元素指针！！
int main()
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's pam's estimate:\n";
    estimate(code, pam);
    
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}






