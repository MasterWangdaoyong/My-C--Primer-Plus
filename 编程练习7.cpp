//  编程练习7.cpp

#include <iostream>
double guangnian(double);

int main()
{
    using namespace std;
    double Xxx;
    double Zzz;
    cout << "Enter the number of light years: ";
    cin >> Xxx;
    Zzz = guangnian(Xxx);
    cout << Xxx << " light years = " << Zzz << " astronomical units. ";
    cout << endl;
    cin.get();
    cin.get();
    return 0;
}


double guangnian(double XXX)
{
    double yyy;
    yyy = XXX * 63240;
    return yyy;
}
