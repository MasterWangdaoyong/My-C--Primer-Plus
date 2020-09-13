#include <iostream>
#include <vector>
#include <array>
int main()
{
    using namespace std;
    double al[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);  // 可以实现程序自动记算数组数量，也就是说（4）里面的4可以省略
    //  如：vector <int...> name;   name = {...}这样输入数组简单;  调用name[...];
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    //不可以省略<里面的数字>，也不可以是const 变量
    array<double, 4> a4;
    a4 = a3;
    
    cout << "a1[2]: " << al[2] << " at " << &al[2]<< endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2]<< endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2]<< endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2]<< endl;
    
    al[-2] = 20.2;
    cout << "al[-2]: " << al[-2] << " at " << &al[-2]<< endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2]<< endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2]<< endl;
    
    cout << "sizeof al " << sizeof(al) << endl;
    cout << "sizeof a2 " << sizeof(a2) << endl;
    cout << "sizeof a3 " << sizeof(a3) << endl;
    
    
    
    return 0;
}
