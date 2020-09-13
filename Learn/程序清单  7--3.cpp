//
//  程序清单  7--3.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/5.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void n_chars(char,int);

int main()
{
    int time;
    char ch;
    
    using std::cout;
    using std::cin;
    
    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter number: ";
        cin >> time;
        n_chars(ch, time);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    
    cout <<  "Bye\n";

    
    return 0;
}


void n_chars(char c, int n)
    {
    while (n-- > 0)
        std::cout << c;
    }






