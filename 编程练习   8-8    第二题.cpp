//
//  编程练习   8-8    第二题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/10/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
const int CC = 20;
struct CandyBar
{
    char * name;
    double height;
    int hot;
};

void Fill_candy(CandyBar & a, char * iname = "Millennium Munch" , double iheight = 2.85, int ihot = 350);
void Show_candy(const CandyBar & a);
int main()
{
    CandyBar a;
    CandyBar d;
    char cc[CC];
    char * aname = cc;
    //指针变量为实存地址
    double height;
    int ihot;
    cout << "cin name:\n";
    cin.get(cc,CC);
    
    cout << "cin double height:\n";
    cin >> height;
    
    cout << "cin int ihot:\n";
    cin >> ihot;
    Fill_candy(a, aname, height, ihot);
    Fill_candy(d);
    Show_candy(a);
    Show_candy(d);
    return 0;
}
void  Fill_candy(CandyBar & a, char * iname, double iheight, int ihot)
{
    a.name = iname;
    a.height = iheight;
    a.hot = ihot;
}
void Show_candy(const CandyBar & a)
{
    cout << "Name: " << a.name << endl;
    cout << "Height: " << a.height << endl;
    cout << "Hot: " << a.hot << endl;
}








