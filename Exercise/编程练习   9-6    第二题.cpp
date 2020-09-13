//
//  编程练习   9-6    第二题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
void strcount(const std::string * str);
int main()
{
    using namespace std;
    string input;
    string next;
    cout << "-----字符输入计数程序----\n----程序运行中----\n";
    cout << "Enter a line:\n";
    getline(cin,input);
    while(input != "")
    {
        //getline(cin,next);
        //while(next != "\n")
          //getline(cin,next);
        strcount(&input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin,input);
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const std::string * str)
{
    using namespace std;
    int total = 0;
    int count = 0;
    cout << "\"" << *str << "\" contains";
    //while (*(str++) != "")
    //上面是想到的一种方法，但是错误的
    for (int x = 0; x < str->length(); x++)
    {                  //新函数接触 xxx->length()  string 变量长度计算
        count++;
    }
    total += count;
    cout << " " <<count << " characters\n";
    cout << total << " characters total\n";
}




