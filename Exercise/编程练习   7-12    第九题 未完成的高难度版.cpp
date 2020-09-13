//
//  编程练习   7-12    第九题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/10.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
const int slen = 30;
struct student
{
    char name[slen]; //名
    char hot[slen];  //爱好
    int level;    //年级
};
int getinfo(student pa[], int n);
//n为共多少个班  一个班一个班存储
void display(student st);   //显示一个学生的信息
void display2(const student * ps); //显示一个学生的信息
void display3(const student pa[], int n); //显示所有信息
int main()
{
    cout << "Enter clase size: ";
    int clase_size;
    // 共几个班
    cin >> clase_size;
    while (cin.get() != '\n')
        continue;
    student  *  ptr = new student  [clase_size];
    int entered = getinfo(ptr, clase_size);
    for (int z = 0; z < 30; ++z)
        cout << "显示" << z << "--" << endl << ptr[z].name;
    cout << entered;
    cout << "---Done---\n";
    return 0;
}

int getinfo(student  pa[], int n)
{
    //n是共多少个班级数
    //每个班最多30人，也可以少于30人
    //返回的是已输入的总人数
    int total = 0;
    int x,z;   //循环中的测试更新变量
    x = z = 0;   //变量给值
    while (x < n)
    {
        cout << "update x++...";
        for (int y = 0; y < 30 && pa[x].level != -1 ; ++y)
        {//如果外x更新，那么每次更新为一个新的y  并且需要重新从0开始
            //中断输入测试，此次的测试中断条件a[x][y]的值为上次已输入的值，不是现此次输入的值
            cout << "\na" << x << y << endl << &pa[x].name<< endl;
            cin.get(pa[x].name, 30).get();
            cout << "hot" << x << y << endl;
            cin.get(pa[x].hot, 30).get();
            cout << "level" << x << y<< endl;
            cin >> pa[x].level;
            cin.get();
        }
        x++;
    }
    return total;
}//分班输入是一个较好处理
void display(student st)
{//显示一个学生的信息
    
}
void display2(const student * ps)
{//显示一个班的
    
}
void display3(const student pa[], int n)
{//显示所有信息
    
}
//设计想法： 1､统计共用有多少个班  2､共有多少个人（人名） 3､爱好   4､可以是代表任何的有效果数字表达任何意思
// 每个班人数上限是30  当然你输入也可以是小于30人 此处输入小于30人时 在循环输入时需测试中断输入此班  然后跳转到下一个班级输入  难点一：动态二维数组内存声明与初始化； 难点二：函数定义  函数原型

