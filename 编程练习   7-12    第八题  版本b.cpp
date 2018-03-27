//
//  编程练习   7-12    第八题  版本b.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/10.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
const int seasons = 4;
const char * jidu[seasons] = {"Spring","Summer","Fall","Winter"};
//char 经测试不同于 其他类型
struct shu
{
    double number;
};
void fill_x(const char * (*cc) ,shu * xx, const int seasons);
//因 shu是结构 所以这个函数原型需得在结构声明后面
void show(const char * (*cc), shu * name, const int xx);
//此处需注意 char二维数组 指针 的接口描写

int main()
{
    cout << "---不用array和string的数组程序---版本b-结构处理---\n程序运行中...\n";
    shu * cc;
    shu bb[seasons];
    cc = bb;
    fill_x(jidu,bb, seasons);
    cout << endl;
    show(jidu, cc, seasons);
    cout << "---Done---\n";
    
    return 0;
}
void fill_x(const char * (*cc) ,shu * xx, const int seasons)
{
    //shu * yy;
    //yy = xx;
    for (int x = 0; x < seasons; x++, xx++,cc++)
    {
        cout << *cc << "\t ->  ";
        cin >> xx->number;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad imput; return imput number: (输入负数时输入结束) ";
            cin >> xx->number;
        } //与上道题目存在同样的问题，同时输入两次错误->就会出现输入错误
        else if(xx->number < 0)
            break;
        //cout << &xx->number << " -> " << xx->number << endl;
    }
}

void show(const char * (*cc), shu * name, const int xx)
{//注意char 的二维数组的指针 接口描写
    double xxx = 0;
    for (int x = 0; x< 4; x++,name++,cc++)
    {//注意结构的地址循环更新写法  不要误写成数据++1等其他的
        cout << *cc << "\t ->  "<< name->number << endl;
        //注意char的二维数组的相关指针解除调用
        xxx += name->number;
    }
    cout << "Total -> " <<  xxx << "\n";
}








