//  编程练习8.cpp
#include <iostream>
void Aaa(int);
void Ccc(int);

int main()
{
    using namespace std;
    int x;
    int y;
    cout << "Enter the number of hours: ";
    cin >> x;
    Aaa(x);
    cout << "Enter the number of minutes: ";
    cin >> y;
    cout << "Times: ";
    Aaa(x);
    cout << " : " ;
    Ccc(y);
    cin.get();
    cin.get();
    return 0;
}

void Aaa(int Ccc)
{
    using namespace std;
    int Xxx;
    Xxx = Ccc;
    cout << Xxx;
    
}

void Ccc(int Ddd)
{
    using namespace std;
    int  Eee;
    Eee = Ddd;
    cout << Eee;
}