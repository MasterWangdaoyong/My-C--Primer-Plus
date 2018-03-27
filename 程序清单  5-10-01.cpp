#include <iostream>
#include <cstring>
#include <string>
int main()
{
    using namespace std;
    
    
    int i = 0;
    int x[5] = {1,2,3,4,5} ;
    int y[5] = {11,12,13,14,4};
    while (x[i] != y[4])
    {
        
        cout << x[i] << endl;
        i++;
    }
    
    
    cout << "Doing it dangerously wrong: " << x[i] << endl;
    
    return 0;
}
