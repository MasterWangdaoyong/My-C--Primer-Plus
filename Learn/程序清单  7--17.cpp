//
//  程序清单  7--17.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/10.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

void subdivide(char ar[], int low, int high, int level);
const int len = 66;
const int divs = 6;

int main()
{
    using namespace std;
    char ruler[len];
    int i;
    for (i = 1; i < len - 2; i++)
        ruler[i] = ' ';
    ruler[len - 1] = '\0';
    int max = len -2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for (i = 1; i <= divs; i++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < len - 2; j++)
            ruler[j] = ' ';
    }
    
    
    
    
    
    
    return 0;
}


void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level -1);
    
}






