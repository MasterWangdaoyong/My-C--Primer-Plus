//
//  复习题 6-10 第三题.cpp
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
    int ct1, ct2;
    
    ct1 = ct2 = 0;
    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch =='s')  //跟书上不符    书上是负值运算符    此处我已纠正
            ct2++;
        cout << ch;
    }
    cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << endl;
    return 0;
}
