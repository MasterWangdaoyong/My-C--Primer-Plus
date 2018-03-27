//
//  编程练习   7-12    第九题 简单版.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/9/23.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
const int slen = 30;
struct student
{
    char name[slen]; //名
    char hot[slen];  //爱好
    int level;    //年级
};
int getinfo(student pa[], int n);
void display(student st);   //显示一个学生的信息
void display2(const student * ps); //显示一个学生的信息
void display3(const student pa[], int n); //显示所有信息
int main()
{
    cout << "---信息记录程序---\n程序运行中...\n输入需要记录信息的总数: ";
    int clase_size;
    // 输入需要记录信息的总数
    cin >> clase_size;
    while (cin.get() != '\n')
        continue;
    student  *  ptr = new student  [clase_size];
    int entered = getinfo(ptr, clase_size);
    cout << "--------------------------------------------\n";
    for (int z = 0; z < entered; ++z)
    {
        //cout << "Name:\t" << z << "\t" << ptr[z].name << endl;
        display(ptr[z]);
        display2(&ptr[z]);
    }
    cout << "--------------------------------------------\n";
    display3(ptr, entered);
    cout << "--------------------------------------------\n";
    delete [] ptr;
    
    cout << "---Done---\n";
    return 0;
}

int getinfo(student  pa[], int n)
{
    //n需要输入的数
    //返回的是已输入的总数
    int x;
    for (x = 0; x < n; ++x)
        {
            
            cout << "输入‘q’中断输入程序...\n输入进行中...\n";
            cout << "姓名："<< endl;
            cin.get(pa[x].name, 30).get();
            if (!strcmp(pa[x].name,"q"))  //注意strcmp此函数意思
                break;
            cout << "爱好：" << endl;
            cin.get(pa[x].hot, 30).get();
            cout << "年级：" << endl;
            cin >> pa[x].level;
            cin.get();
        }
    return x;
}
void display(student st)
{
    cout << "姓名:\t" << st.name ;
    cout << "\t爱好:\t" << st.hot ;
    cout << "\t年级:\t" << st.level ;
}
void display2(const student * ps)
{
    cout << "\n姓名内存地址:\t" << &ps->name << endl;
    cout << "爱好内存地址:\t" << &ps->hot << endl;
    cout << "年级内存地址:\t" << &ps->level << endl;
}
void display3(const student pa[], int n)
{
    for (int x = 0; x < n; ++x)
    {
        cout << "姓名:\t" << pa[x].name << endl;
        cout << "姓名内存地址:\t" << &pa[x].name << endl;
        cout << "爱好:\t" << pa[x].hot << endl;
        cout << "爱好内存地址:\t" << &pa[x].hot << endl;
        cout << "年级:\t" << pa[x].level << endl;
        cout << "年级内存地址:\t" << &pa[x].level << endl;

    }
}
