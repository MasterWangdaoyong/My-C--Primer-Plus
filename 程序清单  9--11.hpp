//
//  程序清单  9--11.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/1/31.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef ______9__11_hpp
#define ______9__11_hpp

#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void  getPerson(Person &);
    void  showPerson(const Person &);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amout;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebt(const Debt ar[], int n);
}



#endif /* ______9__11_hpp */
