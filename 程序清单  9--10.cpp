
//
//  程序清单  9--10.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include <new>
const int SUF = 512;
const int N = 5;
char buffer[SUF];
int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 100 + 20.0 * i;
    cout << "Meory address:\n" << " heap: " << pd1
    << " static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[1] << "; ";
        cout << pd2[i] << " at " << &pd2[1] << endl;
    }
    
    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double [N];
    for (i = 0; i< N; i++)
    {
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    }
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[1] << "; ";
        cout << pd4[i] << " at " << &pd4[1] << endl;
    }
    cout << "\nCalling new and placement new a third time:\n";
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N *sizeof(double)) double[N];
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[1] << "; ";
        cout << pd2[i] << " at " << &pd2[1] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    
    
    return 0;
}







