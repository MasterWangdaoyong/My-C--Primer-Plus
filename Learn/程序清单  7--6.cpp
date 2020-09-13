//
//  程序清单  7--6.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int sum_arr(int [], int);
const int size = 8;

int main()
{
    int cookies[size] = {1,2,3,4,55,66,74,128};
    std::cout << cookies << " = array address, ";
    
    std::cout << sizeof (*cookies) << " = sizeof cookies\n";
    int sum = sum_arr(cookies, size);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "First three eater are " << sum << " cookies.\n";
    sum = sum_arr(cookies+4,4);
    std::cout << "Last four eater are " << sum << " cookies.\n";
    return 0;
}


int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    
    std::cout << sizeof (*arr) << " = sizeof arr\n";   //????报错
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}






