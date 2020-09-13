//  编程练习6.cpp
#include <iostream>
double danwei(double);

int main()
{
    using namespace std;
    double x;
    double z;
    cout << "Enter the number of light years: ";
    cin >> x ;
    z = danwei(x);
    cout << x << " light years = " << z << " astronomical units.";
    cin.get();
    cin.get();
    return 0;
}

double danwei(double b)
{
    double z;
    z = b * 63240;
    return z;
}