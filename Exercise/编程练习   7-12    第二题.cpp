//
//  编程练习   7-12    第二题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/19.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
int fill_chengji(float xx[], int y);
void show_chengji(float * chengji, int y);
void pingjushu(float * chengji, int y);
const int y = 10;
int main()
{
    cout << "---平均成绩计算运算程序---\n程序运行中...\n";
    float chengji[y];
    fill_chengji(chengji, y);
    show_chengji(chengji, y);
    pingjushu(chengji, y);
    cout << " ---Done---\n";
    return 0;
}
int fill_chengji(float xx[], int y)
{//重大失误点 未能在填充数组时返回出正确的输入次数 见218页  莫名其妙
    //问题已解决 是因为写在main函数前的原型头 用了void
    float x_y;
    int x;
    cout << "请最多输入 " << y << " 个成绩： ";
    for (x = 0; x < y; x++)
    {
        cout << " 第 " << x+1 << " 个：";
        cin >> x_y;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad imput, Please type number!";
            cin >> x_y;
        }
        else if (x_y < 0)
            break;
        xx[x] = x_y;
    }
    return x;
}
void show_chengji(float * chengji, int y)
{
    for (int x = 0; x < y; x++)
    {
        cout << "已输入的成绩 " << x+1 << " -> " << *(chengji+x) << endl;
    }
}
void pingjushu(float * chengji, int y)
{
    float xx;
    for (int x = 0; x < y; x++)
    {
        if(*(chengji+x) == 0)
            break;
        xx += *(chengji+x);
        
    }
    cout << "该数据组的平均成绩为 -> ";
    cout << xx/y  << endl;
}




