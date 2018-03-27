//
//  test 跳转循环.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/17.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int x,z;   //循环中的测试更新初如变量
    x = z = 0;   //变量给值
    int a[3][30];  //数组
    while (x <3)
    {
        cout << "update x++...";
        for (int y = 0; y < 3 && a[x][y-1] != -1 ; ++y)
        {//如果外x更新，那么每次更新为一个新的y  并且需要重新从0开始
        //中断输入测试，此次的测试中断条件a[x][y]的值为上次已输入的值，不是现此次输入的值
            cout << "a" << x << y << endl;
            cin >> a[x][y];
        }
        x++;
    }
    
    int xx = 0;
    while ( xx < 3 )
    {//这个显示的循环可以写成跟上面输入的循环是一模一样
        for (int y = 0; y < 30; ++y)
            cout << "a" << xx << y << endl <<a[xx][y] << endl;
        xx++;
    }
    
    return 0;
}
