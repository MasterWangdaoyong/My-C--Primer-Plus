//
//  程序清单  10--4  00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include "程序清单  10--4.hpp"

int main()
{
    {
        using namespace std;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock ("Boffo Objects", 2, 2.0);
        stock2.show();
        
        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        
        cout << "Using a constrctor to reset an object\n";
        stock1 = Stock ("Nifty foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    
    return 0;
}
