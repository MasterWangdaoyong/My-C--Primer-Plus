//
//  test  8  part.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/28.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>
T Min_max(T &a, T &b);
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
template <> float Min_max<box>(box &a, box &b);
int main()
{
    box a = {"wang jianping",70,1,6,2};
    box d = {"wang daoyong",60,1,5,3};
    int c = 3, b = 14;
    cout << Min_max(c, b) << endl;
    return 0;
}
template <typename T>
float Min_max(T &a, T &b)
{
    return a > b ? a : b;
}
template <> float Min_max<box>(box &a, box &b)
//前基础函数声音返回一定要一样,如：void
{
    float x,y;
    x = a.height * a.width * a.length;
    y = b.height * b.width * b.length;
    return x > y ? x : y;
}








