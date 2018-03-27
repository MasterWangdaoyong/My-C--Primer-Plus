//
//  复习题  9--5  第七题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/17.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
using namespace std;
void other();
namespace n1
{
    int x = 1;
}
namespace n2
{
    int x = 2;
}

int main()
{
    using namespace n1;
    cout << x << endl;
    {
        int x = 4;
        cout << x << " , " << n1::x << " , " << n2::x << endl;
    }
    using n2::x;
    cout << x << endl;
    other();
    return 0;
}

void other()
{
    using namespace n2;
    cout << x << endl;
    {
        int x = 4;
        cout << x << " , " << n1::x << " , " << n2::x << endl;
    }
    using n2::x;
    cout << x << endl;
}







