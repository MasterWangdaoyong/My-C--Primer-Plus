//
//  程序清单  8--14.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;

struct debts
{
    char name[50];
    double amount;
};

template <typename T>
void Showarray(T arr[], int n);
template <typename T>
void Showarray(T * arr[], int n);

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr[3] =
    {
        {"Ima", 2400.0},
        {"Ura", 1300.0},
        {"Lby", 1800.0}
    };
    double * pd[3];
    
    for (int i = 0; i < 3; i++)
        pd[i] = &mr[i].amount;
    cout << "Listing mr. e counts of things:\n";
    Showarray(things, 6);
    cout << "Listing mr. e debts:\n";
    Showarray(pd, 3);
    
    return 0;
}

template <typename T>
void Showarray(T arr[], int n)
{
    cout << "template A\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

template <typename T>
void Showarray(T * arr[], int n)
{
    cout << "template B\n";
    for (int i = 0; i < n; ++i)
        cout << *arr[i] << " ";
    cout << endl;
}









