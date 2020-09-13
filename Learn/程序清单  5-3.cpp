#include <iostream>
int main()
{
    using namespace std;
    int x;
    
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    
    cout.setf(ios_base::boolalpha); //新c++特征   个人理解输出：透明bool 是对是错 true and false
    
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    
    return 0;
}
