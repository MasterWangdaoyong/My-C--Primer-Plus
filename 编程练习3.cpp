//  编程练习3.cpp
#include <iostream>
void aaa(int);
void bbb(int);

int main()
{
    using namespace std;
    aaa(0);
    cout << endl;
    aaa(0);
    cout << endl;
    bbb(0);
    cout << endl;
    bbb(0);
    cin.get();
    cin.get();
    return 0;
}

void aaa(int)
{
    using namespace std;
    cout << " Three blind mice ";
}

void bbb(int)
{
    using namespace std;
    cout << " See how the run";
}