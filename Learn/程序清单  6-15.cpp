//  outfile
//  程序清单  6-15.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/2.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    ofstream outFile;
    outFile.open("carinfo.txt");
    
    cout << "Enter the make and model of automoble: ";
    cin.get(automobile,50);
    cout << "Enter the modle year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;
    
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;
    
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and Model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;
    
    outFile.close();
    
    return 0;
}
