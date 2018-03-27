//
//  程序清单  7--14.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/8.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
void display(const string sa[], int n);
const int size = 5;
int main()
{
    string list[size];
    cout << "Enter your " << size << " favorite astronomical sights.\n";
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << " : ";
        getline(cin, list[i]);
    }
    cout << "Your list: \n";;;
    display(list, size);
    return 0;
}


void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << " : " << sa[i] << endl;
}
