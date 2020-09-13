//
//  程序清单  8--9.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/22.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
const int Arsize = 80;
char * left(const char * str, int n = 1);

int main()
{
    char sample[Arsize];
    cout << "Enter a string:\n";
    cin.get(sample,Arsize);
    char * ps = left(sample,4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;
    return 0;
}
char * left(const char * str, int n)
{
    if (n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}




