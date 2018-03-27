#include <iostream>
int main()
{
    using namespace std;
    
    int yy;
    int y=0;
    
    
        for (int x = 0; x<=2 ;x++)
    {
        cout << "请输入需要计算的数（整数）0" << x  << " : ";
        cin >> yy;
        y += yy;
    
            };
    cout << "您总共输了3组数，总和为： " << y << endl;
    
    
    
    
    return 0;
}
