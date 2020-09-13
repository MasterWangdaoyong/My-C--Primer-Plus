//
//  程序清单  7--4.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/5.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
long double probability(unsigned,unsigned);

int main()
{
    using namespace std;
    double total, choice;
    cout << "Enter the total number of choices on the game card and\n"
    "the number of picks allowed:\n";
    while ((cin >> total >> choice) && choice <= total)
    {
        cout << "You have one choice in ";
        cout << probability(total, choice);
        cout << " of winning.\n";
        cout << "Next two number (q to quit): ";
    }
    cout << "bye.\n";
    
    
    return 0;
}







long double probability(unsigned number, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    
    for (n = number,p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}









