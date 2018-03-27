//  enum
//  程序清单  6-11.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
enum {one, two, three, four, five, six, seven, eight};
int main()
{
    using namespace std;
    cout << "Enter number code (1-8) ";
    int code;
    cin >> code;
    while (code >= one && code <= eight)
    {
        switch (code)
        {
            case one : cout << " 1 \n";
                break;
            case two : cout << " 2 \n";
                break;
            case three : cout << " 3 \n";
                break;
            case four : cout << " 4 \n";
                break;
            case five : cout << " 5 \n";
                break;
            case six : cout << " 6 \n";
                break;
            case seven : cout << " 7 \n";
                break;
            case eight : cout << " 8 \n";
                break;
            default :
                break;
        }
        cout  << "Enter number code (1-8) ";
        cin >> code;
    }
    
    
    
    
    
    return 0;
}

