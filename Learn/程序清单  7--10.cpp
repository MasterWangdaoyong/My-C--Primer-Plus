//
//  程序清单  7--10.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

char * abc(char c, int n);

int main()
{
    using namespace std;
    int times;
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char * ps = abc(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = abc('+', times/2);
    cout << ps << "-DONE" << ps << endl;
    delete [] ps;
    
    return 0;
}




char * abc(char c, int n)
{
    char * bc = new char[n+1];
    bc[n] = '\0';
    while (n-- > 0)
        bc[n] = c;
    return bc;
}









