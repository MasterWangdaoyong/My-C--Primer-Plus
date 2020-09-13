//  sumafile
//  程序清单  6-16.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/2.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <fstream>
const int Size = 60;
int main()
{
    using namespace std;
    
    char filename[Size];
    
    ifstream inFile;
    
    cout << "Enter name of date file: ";
    
    cin.getline(filename, Size);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    
    inFile >> value;
    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by date mismatch.\n";
    else
        cout << "Input terminated for unknow reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}
