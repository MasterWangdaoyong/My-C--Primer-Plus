//
//  程序清单  7--8.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

int sum_arr(const int * begin, const int * end);
const int size = 8;

int main()
{
    using namespace std;
    int cookies[size] = {1,12,3,4,5,6,7,5};
    int sum = sum_arr(cookies, cookies+size);
    cout << "Total cookies eaten: " << sum  << endl;
    sum = sum_arr(cookies, cookies+3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies+4, cookies+8 );
    cout << "Last four eaters ate " << sum << "cookies.\n";
    return 0;
}


int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total += *pt;
    return total;
}




















