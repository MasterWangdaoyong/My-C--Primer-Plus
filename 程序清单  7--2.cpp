//
//  程序清单  7--2.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/5.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
void cheers(int);
double cube(double);

int main()
{
    cheers(5);
    std::cout << "Please give me a number: ";
    double side;
    std::cin >> side;
    double volume = cube(side);
    std::cout << "A " << side << "-foot cube has a volume of " << volume << " cubic feed.\n";
    cheers(cube(2));
    return 0;
}


void cheers(int n)
{
    for (int i = 0; i < n; i++)
        std::cout << "Cheers!";
    std::cout << std::endl;
}

double cube(double x)
{
    return x*x*x;
}
