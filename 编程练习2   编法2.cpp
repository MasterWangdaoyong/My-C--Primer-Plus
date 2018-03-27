//  编程练习2   编法2.cpp
#include <iostream>

int main()
{
    using namespace std;
    cout << "长度与码数换算!" << endl;
    int x;      
    int y;
    cout << "请输入长度: ";
    cin >> x;
    cout << endl;
    y = x * 220;
    cout << "等于 " << y << " 码。";
    cin.get();
    cin.get();
    
    return 0;
}
