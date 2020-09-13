//
//  程序清单  8--13.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
template <typename T>
void Swap(T &a, T &b);


struct job
{
    char name[40];
    double salary;
    int floor;
};
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);


int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10,j = 20;
    cout << "i,j = " << i << " , " << j << endl;
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "Now i,j = " << i << " , " << j << endl;
    
    job sue = {"Susan", 73000.60, 7};
    job sidy = {"Sidy", 78069.70, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidy);
    Swap(sue, sidy);
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidy);
    
    return 0;
}


template <typename T>
void Swap(T &a, T &b)
{
    T t;
    t = a;
    a = b;
    b = t;
}

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}
void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $ " << j.salary << " on floor "
    << j.floor << endl;
}










