//
//  程序清单  6-3.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;
    
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- quess again: ";
        else if (n > Fave)
            cout << "Too hight -- quess again: ";
        else
            cout << Fave << " is right.\n";
    } while (n != Fave);
    return 0;
}
