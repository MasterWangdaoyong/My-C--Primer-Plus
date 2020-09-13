//
//  golf.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//
//文件二
#ifndef golf_hpp
#define golf_hpp

#include <iostream>
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void showgolf(const golf & g);



#endif /* golf_hpp */
