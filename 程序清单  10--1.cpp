//
//  程序清单  10--1.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include "程序清单  10--1.hpp"
#include <iostream>

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
        << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be nagative. Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative."
        << "Transaction is aborted.\n";
    }
    else
    {
        shares -= price;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    std::cout << "Company: " << company << " Shares: " << shares
    << "\n" << " Share price: $" << share_val << " Total worth: $"
    << total_val << "\n";
}
