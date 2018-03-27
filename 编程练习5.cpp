//  编程练习5.cpp
#include <iostream>
double wenduhuansuai(double);

int main()
{
    using namespace std;
    double x;
    double z;
    cout << "Please enter a Celsius value： ";
    cin >> x;
    cout << endl;
    z = wenduhuansuai(x);
    cout << x <<" degrees Celsius is " << z << " degrees Fahrenheit.";
    cout << endl;
    cin.get();
    cin.get();
    return 0;
    
}

double wenduhuansuai(double y)
{
    double yy;
    yy = y * 1.8 + 32.0;
    return yy;
}
    
