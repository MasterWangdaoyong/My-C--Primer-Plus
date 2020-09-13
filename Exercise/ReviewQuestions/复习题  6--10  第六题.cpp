
//
//  复习题  6--10  第六题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/3.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    int x,y;
    cin >> x;
    y = x>0?x:0-x;         // ?:   标准答案  x>y?z:w   ?:的使用
    cout << "x= " << y << endl;
    return 0;
}
