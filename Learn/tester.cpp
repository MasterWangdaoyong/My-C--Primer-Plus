#include <iostream>
int main()
{
    using namespace std;
    const int size = 4;
    int y = 0;
    
    int x[size] = {5,1,0,30};
    
    for (int i=0; i != size; i++)
    {
        y += x[i];
    }
    
    cout << y << " world"  << endl;
    
    return 0;
}
