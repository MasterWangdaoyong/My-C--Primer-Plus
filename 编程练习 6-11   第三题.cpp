//  菜单驱动邹形
//  编程练习 6-11   第三题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/4.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
void showmune();
int main()
{
    showmune();
    
    char choice;
    
    cin.get(choice).get();
  
    while (choice != 'q')
    {
        
        switch (choice) {
            case 'c': cout << "1111\n\n";
                break;
            case 'p': cout << "2222\n\n";
                break;
            case 't': cout << "A maple is a tree.\n\n";
                break;
            case 'g': cout << "4444\n\n";
                break;
    
            default: cout << "Please enter a c,p,t, or g: \n\n";
                break;
        }
        //showmune();
        cin.get(choice).get();
    }
    
    
    return 0;
}

void showmune()
{
    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore\t\tp) pianist\nt) tree\t\tg) game\nf) ffff\t\tq) quit\n\n";
}
