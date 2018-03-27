//  more and
//  程序清单  6-6.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/29.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
const char * qualify[4] =
{
    "10,000-meber race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main()
{
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;
    
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    
    cout << "You qualify for the " << qualify[index];
    
    
    return 0;
}
