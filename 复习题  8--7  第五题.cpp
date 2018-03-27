//
//  复习题  8--7  第五题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/10.
//  Copyright © 2018年 王道勇. All rights reserved.
//
#include <iostream>
#include <string>
#include <array>
using namespace std;
const int seasons = 4;
const array<string, seasons> snames = {"spring", "sumer", "fall", "winter"};
//void fill(array<double, seasons> *pa);
void fill(array<double, seasons> & pa);
//void show(array<double,seasons> da);
void show(array<double,seasons> & da);

int main()
{
    array<double, seasons> expenses;
    fill(expenses);
    show(expenses);
    return 0;
}

/*void fill(array<double, seasons> *pa)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "Enter " << snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}*/

void fill(array<double, seasons> & pa)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "Enter " << snames[i] << " expenses: ";
        cin >> pa[i];
    }

}

/*void show(array<double,seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        cout << snames[i] << " : $ " << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}*/

void show(array<double,seasons> & da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        cout << snames[i] << " : $ " << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}


