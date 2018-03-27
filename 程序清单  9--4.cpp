//
//  程序清单  9--4.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/18.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
void oil(int x);


int main()
{
    using namespace std;
    
    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << " , &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << " , &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << " , &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << " , &year = ";
    cout << &year << endl;
    return 0;
}
void oil(int x)
{
    using namespace std;
    int texas = 5;
    
    cout << "In oil(), texas = " << texas << " , &texas = ";
    cout << &texas << endl;
    cout << &x << endl;
    {
        int texas = 113;
        cout << "In block, texas = " << texas;
        cout << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x = ";
        cout << &x << endl;
    }
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}






