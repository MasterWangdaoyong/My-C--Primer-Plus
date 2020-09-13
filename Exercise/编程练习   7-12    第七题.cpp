//
//  编程练习   7-12    第七题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/2.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
const int Max = 5;

void show_arr(const double * abc, const double * end_abc);
double * fill_arr(double * begin, double * end);
void revalue_arr(double r, double * begin, double * e__endl);

int main()
{
    
    double * test;
    double abc[Max];
    double xxxx;
    test = abc;
    double * e__endl;
    e__endl = fill_arr(test, test+Max);
    show_arr(test, e__endl);
    //可以试一下把上面的函数调用直接放在此函数调用里面，免去了多余的指针
    //声明、初如化  晚上回来测试一下
    //已测试当把上面的调用放在这两个函数里面，存在问题
    cout << "请输入数据的因子（倍数）-> ";
    cin >> xxxx;
    if (!cin)
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "输入错误！请重新输入数据的因子（倍数）-> ";
        cin >> xxxx;
    }
    revalue_arr(xxxx, test, e__endl);
    cout << "----Done----\n";
    
    return 0;
}

double * fill_arr(double * begin, double * end)
{//需记住声明函数头名称时  记得加上*  来表明返回的是指针地址
    //引用该函数时也需要新声明一个函数，然后把此函数的地址"负值"给它
    //（负值两个字打不出代用）
    double * end_l;  //声明指针
    for (end_l = begin; end_l < end; end_l++)
    {
        cout << "Address: "<< end_l << " Enter number -> (输入负数时输入结束) ";
        cin >> *end_l;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad imput; return imput number: (输入负数时输入结束) ";
            cin >> *end_l;
        } //与上道题目存在同样的问题，同时输入两次错误->就会出现输入错误
        else if(*end_l < 0)
            break;
        cout << end_l << " -> " << *end_l << endl;
    }
    return end_l;   //先声明一个指针，然后反回该指针名，就是反回指针了
}

void show_arr(const double * abc, const double * end_abc)
{
    const double * cba;
    for (cba = abc; cba < end_abc; cba++)
    {
        cout << cba << " Array number -> ";
        cout << *cba << endl;
    }
}

void revalue_arr(double r, double * begin, double * e__endl)
{
    double * number;
    for (number = begin; number < e__endl; number++)
    {
        *number *= r;
        cout << number << "Property -> "<< *number << endl;
    }
    //cout << *number;
    //如果把输出显示放循环外  在这会出错  ???
    //如果在这解除指针 是不是解除了上面循环中的所有指针，
    //也就是说N个指针一起解除？ 所以编译器的结果显示让人不明白？
    //代表是整个区间的针指还是 区间里面的单个指针？
    //为什么会出错呢？？？ 是不是这样的意思 因为是指针区间 编译器不清楚你
    //需解除指针到底是哪一个指针吗？ 是解除他  还是解除他们这种问题吗？
    //  没有头绪！
}




