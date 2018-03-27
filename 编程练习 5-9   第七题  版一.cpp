//
//  编程练习 5-9   第七题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/8.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <string>
struct car
{
    std::string shenchaishang;
    int years;
};
int main()
{
    using namespace std;
    
    int size;
    
    cout << "How many cars do you wish to catalog? ";
    cin >> size;
    cin.get();   //不能丢掉  否则getline中会输入空字符
    
    car * one = new car [size];
    
    cout << "Car #1:\n";
    cout << "Please enter the make：";
    getline(cin,one[0].shenchaishang);
    
    cout << "Please enter the year made：";
    cin >> one[0].years;
    cin.get();     //不能丢掉  否则getline中会输入空字符
    
    cout << "Car #2:\n";
    cout << "Please enter the make：";
    getline(cin,one[1].shenchaishang);
    
    cout << "Please enter the year made：";
    cin >> one[1].years;
    
    cout << "Here is your collection:\n" << one[0].years << "  "<< one[0].shenchaishang <<endl;
    cout <<one[1].years << "  "<< one[1].shenchaishang <<endl;
    
    delete [] one;
    
    cout << "大小：" << sizeof one << endl;
    return 0;
}
