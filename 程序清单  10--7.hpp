//
//  程序清单  10--7.hpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#ifndef ______10__7_hpp
#define ______10__7_hpp
#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}
public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};


#endif /* ______10__7_hpp */
