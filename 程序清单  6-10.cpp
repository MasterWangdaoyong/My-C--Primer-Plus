//  switch
//  程序清单  6-10.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n\n";
                break;
            case 2 : report();
            {
                cout << endl << endl;
                break;
            }
            case 3 : cout << "The boss was in all day.\n\n";
                break;
            case 4 :               //跟case 2 后面效果一样？？
            {
                comfort();
                cout << endl << endl;
                break;
            }
            default: cout << "That's not a choice.\n\n";
        }
        showmenu();
        cin >> choice;
    }
    
}
void showmenu()
{
    cout << "Please enter 1,2,3,4, or 5;\n"
    "1) alarm     2)report\n"
    "3) alibi     4) comfort\n"
    "5) quit\n";
}
void report()
{
    cout << "It's been an excellent week for business.\nSales are up 120$. Expenses are down 35$\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n in the industry. The board of directors think\nyou are the finest CEO in the industry.\n";
}
