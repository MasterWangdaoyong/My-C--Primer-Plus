//
//  程序清单  7--16.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/9.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void countdown(int n);

int main()
{
    countdown(4);
    return 0;
}



void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if (n > 0 )
        countdown(n-1);
    cout << n << " : Kaboom:\n";
}
