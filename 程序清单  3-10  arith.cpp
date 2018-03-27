//
//  程序清单 3-10  arith.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/11/22.
//  Copyright © 2016年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;
    cout.setf(ios_base::fixed,ios_base::floatfield);    //fixed-point
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;
    
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    cin.get();
    cin.get();
    return 0;
    
}
