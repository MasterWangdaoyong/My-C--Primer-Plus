//
//  编程练习   9-6    第三题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/18.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <new>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};

const int SUF = 512;
const int N = 5;
char buffer[SUF];
int main()
{
    using namespace std;
    chaff *pd2;
    int i = 0;
    cout << "Calling new and placement new:\n";
    pd2 = new (buffer) chaff[N];
    while (i < N)
    {
        cout << i << endl;
        cin.get(pd2[i].dross,20);
        cout << "number \n";
        cin >> pd2[i].slag;
        i++;
        //存在输入bug
    }
    cout << "Static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd2[i].dross << " \tat " << &pd2[i].dross << endl;
        cout << pd2[i].slag << " \tat " << &pd2[i].slag << endl;
    }
    
    
    return 0;
}








