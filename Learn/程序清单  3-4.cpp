//
//  程序清单 3-4.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/10/26.
//  Copyright © 2016年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    cin.get();
    cin.get();
    return 0;
}
