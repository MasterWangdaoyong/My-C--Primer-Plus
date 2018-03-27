//  or
//  程序清单  6-4.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    cout << "This program may reformat your hard disk.\n"
    "and destroy all your data.\nDo you wish to continue? <y/n> ";
    
    char ch;
    cin >> ch;
    
        if (ch == 'y' || ch == 'Y')
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye\n";
    else
        cout << "That wasn't a y or n! Apparently you "
        "can't follow\ninstructions, so I'll trash your disk anyway.\a\a\a\n";
    
    return 0;
}
