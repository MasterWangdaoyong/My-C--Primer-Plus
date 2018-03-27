//
//  编程练习 5-9   第八题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/9.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int size = 15;
    char name[size];
    
    int x = 0;
    
    cout << "Enter words (to loop, type the word done):\n";
    
    do
    {
        
        ++x;
        cin.get(name,size).get(); //.get()绝不能少  因为再次循环又会遇到cin.get()命令
    }while (strcmp(name,"done"));
    
    
    cout << "You entered a total of "  << x-1 << " words." << endl;
    
    
    
    return 0;
}
