//
//  usetime2.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/15.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "mytime2.hpp"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time diff;
    Time total;
    Time adjusted;
    
    cout << "weeding time = ";
    weeding.Show();
    cout << endl;
    
    cout << "waxing time = ";
    waxing.Show();
    cout << endl;
    
    cout << "total work time = ";
    total = weeding + waxing;
    //operator notation
    total.Show();
    cout << endl;
    
    diff = weeding - waxing;
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;
    
    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    return 0;
}
