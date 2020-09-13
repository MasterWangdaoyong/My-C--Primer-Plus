//
//  编程练习   7-12    第八题.cpp
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
double * fill(double * name, const int seasons);
void show(const char * (*cc), double * name, const int xx);
//此处需注意 char二维数组 指针 的接口描写
int main()
{
    cout << "---不用array和string的数组程序---\n程序运行中...\n";
    /*for (int x = 0; x< 4; x++)
     {//拿来测试 看数组内存地址
        cout << &(jidu[x]) << " -> " <<jidu[x] << endl;
        cout << *jidu << endl << *(jidu+1);
    }*/
    cout << endl;
    double * arr;
    double arr1[seasons];
    arr = arr1;
    fill(arr, seasons);
    //有反回地址  这样不会出错吗？ 还是上面已指定地址了？
    show(jidu, arr, seasons);
    cout << "---Done---\n";
    
    return 0;
}

                            //好像不能把前cnost int seasons直接放在这
double * fill(double * name, const int seasons)
{//别老是忘记 函数名前面的 *
    double * arr;
    arr = name;
    cout << "请输入 " << seasons << " 个相关数据\n";
    for (int x = 0; x< seasons; x++,arr++)
    {
        cout << "-> ";
        cin >> *arr;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad imput; return imput number: (输入负数时输入结束) ";
            cin >> *arr;
        } //与上道题目存在同样的问题，同时输入两次错误->就会出现输入错误
        else if(*arr < 0)
            break;
    }
    return arr;
}

void show(const char * (*cc), double * name, const int xx)
{//注意char 的二维数组的指针 接口描写
    double xxx = 0;
    for (int x = 0; x< 4; x++,name++,cc++)
    {
        cout << *cc << "\t ->  "<< *name << endl;
        //注意  char 的二维数组的相关指针解除调用
        xxx += *name;
    }
    cout << "Total -> " <<  xxx << "\n";
}








