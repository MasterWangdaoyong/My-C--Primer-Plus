//
//  编程练习 5-9   第九题.cpp
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
    string name;
    
    int x = 0;
    
    cout << "Enter words (to loop, type the word done):\n";
    
    do
    {
        
        ++x;
        getline(cin,name);
    }while (name != "done");
    
    
    cout << "You entered a total of "  << x-1 << " words." << endl;
    
    
    //cout << sizeof name << endl;
    return 0;
}

