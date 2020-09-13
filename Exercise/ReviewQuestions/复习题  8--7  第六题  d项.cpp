//
//  复习题  8--7  第六题  d项.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/10.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;

char * mangle(const char * x, int n = 1);

const int num = 10;
int main()
{
    char x[num] = "abcdef";
    cout << mangle(x,num) << endl;
    return 0;
}

/*char mangle(const char x[], int n)
{
    char z[n+1];
    int i = 0;
    while (i < n)
        {
            z[i] = x[i];
            i++;
        }
    return z[];
}*/

char * mangle(const char * x, int n)
{
    if (n < 0)
        n = 0;
    char * z = new char [n+1];
    int i;
    for (i = 0; i < n && x[i]; i++)
        z[i] = x[i];
    while (i <= n)
        z[i++] = '\0';
    return z;
}











