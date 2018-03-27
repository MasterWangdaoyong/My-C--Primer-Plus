//
//  程序清单  10--7  00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include "程序清单  10--7.hpp"

const int SIZE = 4;

int main()
{
    using namespace std;
    Stock stocks[SIZE] =
    {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo objects", 200, 2.0),
        Stock("Monolithic obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    
    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < SIZE; st++)
        stocks[st].show();
    const Stock * top = &stocks[0];
    for (st = 1; st < SIZE; st++)
        top = &top->topval(stocks[st]);
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}
