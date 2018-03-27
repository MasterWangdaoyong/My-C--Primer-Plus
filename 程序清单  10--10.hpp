//
//  程序清单  10--10.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef ______10__10_hpp
#define ______10__10_hpp

typedef unsigned long Item;
class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif /* ______10__10_hpp */
