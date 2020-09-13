//
//  程序清单  7--7.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int fill_array(double [], int);
void show_array(const double[], int);
void revalue(double, double [], int);
const int cmax = 5;
int main()
{
    using namespace std;
    double abc[cmax];
    
    int size = fill_array(abc, cmax);
    show_array(abc, cmax);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin>>factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad imput; Please enter a number: ";
        }
        revalue(factor, abc, size);
        show_array(abc, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    
    
    return 0;
}

int fill_array(double arr[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;
}

void show_array(const double arr[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i+1) << ": $ ";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i =0; i < 0; i++)
        arr[i] *= r;
}












