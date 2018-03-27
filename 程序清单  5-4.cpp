#include <iostream>
const int Arsize = 16;

int main()
{
    using namespace std;
    long long factor[Arsize];
    factor[1] = factor[0] = 1;
    for (int i = 2; i < Arsize; i++)
        factor[i] = i * factor[i-1];
    for (int i = 0; i < Arsize; i++)
        cout << i << " ! = " << factor[i] << endl;
    return 0;
}
