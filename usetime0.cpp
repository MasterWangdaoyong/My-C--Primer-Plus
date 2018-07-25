//
//  usetime0.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/15.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "mytime0.hpp"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planning time = ";
    planning.Show();
    cout << endl;
    
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    
    
    
    
    
    return 0;
    
    
}
