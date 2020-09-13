//
//  程序清单  9--9.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
const int ArSize = 10;
void strcount(const char * str);
int main()
{
    using namespace std;
    char input[ArSize];
    char next;
    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while(cin)
    {
        cin.get(next);
        while(next != '\n')
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const char * str)
{
    using namespace std;
    int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains";
    while (*str++)
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
