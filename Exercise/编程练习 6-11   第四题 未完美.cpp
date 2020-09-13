//
//  编程练习 6-11   第四题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/4.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void showmune();
const int Size = 10;
using namespace std;

int main()
{
    struct bop
    {
        char fullname[Size];
        char title[Size];
        char bopname[Size];
        int preference;
    };
    
    bop name[5] =
    {
        {"王健平","大哥","道勇",0},
        {"王康平","小弟","道伟",1},
        {"王霞","小妹","霞婆",2},
        {"王道皇","中","道皇",3},
        {"王凤香","小姑","凤香",2}
        
    };
    
    int i = 0;
    
    showmune();
    
    char choice;
    cout << "Enter your choice: ";
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice) {
            case 'a': while (i++ < 5)
            {  //未解决重复输入a时的错误
                if (name[i].preference == 2)
                    cout << name[i].bopname << endl;
            }
                break;
            
            case 'b':  cout << "test--b\n";
                break;
            
            case 'c':  cout << "test--c\n";
                break;
            
            case 'd':  cout << "test--d\n";
                break;
            
            default:  cout << "test--over\n";
                break;
        }
        showmune();
        cout << "Next choice: ";
        cin >> choice;
    }
    
    
    return 0;
}
void showmune()
{
    cout << "\n---Benevolent Order of Programmers Report\n"
    "a. display by name   \t\tb. display by title\nc. display by bopname\t\td. "
    "display by preference\nq. quit\n---\n\n";
}
