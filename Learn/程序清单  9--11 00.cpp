//
//  程序清单  9--11 00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include "程序清单  9--11.hpp"
void other(void);
void another(void);

int main()
{
    using namespace debts;
    using namespace std;
    
    Debt golf = { {"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]);
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebt(zippy, 3) << endl;
    return;
}

void another(void)
{
    using pers::Person;
    Person collector = { "Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
    return;
}










