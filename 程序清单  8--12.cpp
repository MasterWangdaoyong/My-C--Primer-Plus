//
//  程序清单  8--12.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
const int lim = 8;
template <typename T>
void Swap(T &a,T &b);
template <typename T>
void Swap(T a[], T b[], int n);
void show(int a[]);

int main()
{
    using namespace std;
    int i = 10, j = 20;
    cout << "i,j = " << i << " , " << j << ".\n";
    cout << "Using compiler-generated int swaper:\n";
    Swap(i, j);
    cout << "Now i,j = " << i << " , " << j << ".\n";
    
    int d1[lim] = {0,7,0,4,1,7,7,6};
    int d2[lim] = {0,7,2,0,1,9,6,9};
    cout << "Original arrays:\n";
    show(d1);
    show(d2);
    Swap(d1, d2, lim);
    cout << "Swapped arrays:\n";
    show(d1);
    show(d2);
    
    
    return 0;
}
template <typename T>
void Swap(T &a,T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i < n; ++i)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < lim; ++i)
        cout << a[i];
    cout << endl;
}






