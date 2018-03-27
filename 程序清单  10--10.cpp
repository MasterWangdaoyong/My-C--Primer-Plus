//
//  程序清单  10--10.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "程序清单  10--10.hpp"
Stack::Stack()
{
    top = 0;
}
bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}
