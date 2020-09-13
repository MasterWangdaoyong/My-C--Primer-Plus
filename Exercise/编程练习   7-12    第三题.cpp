//
//  编程练习   7-12    第三题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/19.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

typedef  struct box *(*abc)(int * x,int * y);  // ?????? 
int main()
{
    return 0;
}
box re_turn(box x)
{
    box c = x;
    cout << x.maker << endl;
    cout << x.height << endl;
    cout << x.width << endl;
    cout << x.length << endl;
    cout << x.volume << endl;
    return c;
}
void box_dizhi(box * x, box * y)
{
    y->volume = x->height * x->width * x->length;
}




