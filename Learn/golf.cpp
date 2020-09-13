//
//  golf.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//
//文件三
#include "golf.hpp"
#include <cstring>
void setgolf(golf & g, const char * name, int hc)
{
    std::cout << "Please enter name: ";
    strcpy(g.fullname, name);
    //复制字符串  cstring
    std::cout << "Please enter value: ";
    std::cin >> g.handicap;
}
int setgolf(golf & g)
{
    std::cout << "All value: ";
    int x = 0;
    x += g.handicap;
    return x;
}
void showgolf(const golf & g)
{
    std::cout << "\nName: " <<  g.fullname << std::endl;
    std::cout << "Handicap: " <<  g.handicap << std::endl;
}
