//
//  程序清单  8--4.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/21.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void swa(int & a, int & b);
void swb(int * bb, int * cc);
void swc(int a, int b);
int main()
{
    using namespace std;
    int wa1 = 300;
    int wa2 = 350;
    cout << "wa1 = $" << wa1;
    cout << " wa2 = $" << wa2 << endl;
    
    cout << "Using ...\n";
    swa(wa1, wa2);
    cout << "wa1 = $" << wa1;
    cout << " wa2 = $" << wa2 << endl;
    
    cout << "Using ...\n";
    swb(&wa1, &wa2);
    cout << "wa1 = $" << wa1;
    cout << " wa2 = $" << wa2 << endl;
    
    cout << "Trying ...\n";
    swc(wa1, wa2);
    cout << "wa1 = $" << wa1;
    cout << " wa2 = $" << wa2 << endl;
    
    
    return 0;
}

void swa(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swb(int *bb, int * cc)
{
    int temp;
    temp = * bb;
    * bb = * cc;
    * cc = temp;
}

void swc(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}












