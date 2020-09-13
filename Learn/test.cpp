#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    for (int x : {1,2,3,4,5})
    {
        cout << x << " ";
        x = x-1;
    }
    cout << endl;
    return 0;
    
}
