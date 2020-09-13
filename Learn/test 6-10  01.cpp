//
//  test 6-10  01.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/2.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int space = 0;
    int newline = 0;
    while (cin.get(ch))
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            newline++;
    }
    cout << "#1" << space <<endl;
    cout << "#1" << newline << endl;
    return 0;
}
