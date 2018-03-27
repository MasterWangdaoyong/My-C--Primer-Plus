//
//  复习题  8--7  第八题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/10.
//  Copyright © 2018年 王道勇. All rights reserved.
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

template <> box Min_max(box & a, box & b);

int main()
{
    box a = {"wang jianping",70,1,6,2};
    box d = {"wang daoyong",60,1,5,3};
    //int c = 3, b = 14;
    box c = Min_max(a, d);
    cout << c.volume << endl;
    return 0;
}

template <typename T>
float Min_max(T &a, T &b)
{
    return a > b ? a : b;
}

template <> box Min_max(box & a, box & b)
{//自己错误一直写成 template <> float Min_max(box & a, box & b)
    return a.volume > b.volume ? a : b;
}
//一、不要忘记结构也是属于类型的类，直接返回结构（返回类型）
//二、注意return a.volume > b.volume ? a : b;   ？：  的使用方法
