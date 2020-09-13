//
//  usetime3.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/7/25.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "mytime3.hpp"
#include <iostream>

int main()
{
    using namespace std;
    
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " <<  temp << endl;
    temp = aida * 1.17 ;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    temp = aida - tosca;
    cout << "Aida - tosca: " << temp << endl;
    
    return 0;
}
