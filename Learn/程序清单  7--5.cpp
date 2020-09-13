//
//  程序清单  7--5.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/5.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

int sum_arr(int [],int);   // int sum_arr(int xxx[], int) 可以省略数组名
const int Size = 10;


int main()
{
    using namespace std;
    int cookies[Size] = {12,23,43,54,11,2,3,1,0,1};
    int sum = sum_arr(cookies, Size);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}


int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}
