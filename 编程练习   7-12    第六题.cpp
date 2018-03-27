//
//  编程练习   7-12    第六题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/26.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
int fill_arr(double name[], const int x);
void show_arr(const double name[], int xx);
void fan_array(const double name[], int xxx);
int main()
{
    cout << "---填充数组--显示数组--反转数组---\n程序运行中...\n";
    double * test;
    int cc,bb;
    cout << "请输入数据需要填写的次数(整数) -> ";
    cin >> cc;
    /*if (!cin)
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "类型输入错误，请重新输入 -> ";
        cin >> cc;
    
    }*/ //错误的输入检查存在问题  待修改
    bb = fill_arr(test, cc);
    cout << "\n显示已填充的数组  \n";
    show_arr(test, cc);
    cout << "\n反转数组  \n";
    fan_array(test, cc-1);
    cout << "\n---Done---\n";
    return 0;
}


int fill_arr(double name[],int x)
{
    double zz;
    int iy = 0;
    for (int y = 0; y<x; y++)
    {
        cout << y+1 << "/" << x << " -> ";
        cin >> zz;
        if(!cin)  //测试输入是否正确 输入是否跟类型匹配！
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << " BAD! 请重新输入有效数字 -> ";
            cin >> zz; //需在此处加上重要的重新输入  因为上面已清除输入
            // 尽信书不如无书！！
        }   //!!!!!! 测试还是有问题 当输入两次不正确时 会把0输入进去！！
        else if(zz < 0)
            break;
        iy++;
        name[y] = zz;
        cout << "已正确保存输入 -> " << name[y] << "\n";
    }
    return iy;
}
void show_arr(const double name[], int xx)  //不能忘记 const
{                            //不然在显示时候就会破坏原数组数据！
    for (int yy = 0; yy < xx; yy++)
        cout << " -< " << name[yy] << " >- \n";
}
void fan_array(const double name[], int xxx)
{//递归函数
    cout << "反 -< " << name[xxx-1] << " >- \n";
    if (xxx > 2)
        fan_array(name, xxx-1);
    //注意数字，不反转第一个和最后一个
}






