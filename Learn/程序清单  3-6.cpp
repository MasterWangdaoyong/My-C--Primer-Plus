//
//  程序清单 3-6.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/10/28.
//  Copyright © 2016年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    char xxyy;    //自己加上的   用以区分里面的ch
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Add one to the character code:\n";
    xxyy = ch + 1;
    i = xxyy;
    cout << "The ASCII code for " << xxyy << " is " << i << endl;
    
    cout << "Displaying char xxyy using cout.put(ch): ";
    cout.put(xxyy);
    
    cout.put('!');
    cout << endl << "Done\n";
    return 0;
    
    
}
