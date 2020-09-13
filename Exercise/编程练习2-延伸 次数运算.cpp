//  编程练习3-延伸 次数运算.cpp
#include <iostream>
int qieshuzi(int);
int cimi(int);
int main()
{
    using namespace std;
    int x;
    int n;
    cout << "请输入主数字： " ;
    cin >> x;
    cout << endl;
    cout << "请输入次幂数： " ;
    cin >>n;
    int y = qieshuzi(x) * cimi(n);
    cout << "等于： " << y;
    cin.get();
    cin.get();
    return 0;
}
int qieshuzi(int xx)       // 主数字
{
    int x = xx;
    return x;
}
int cimi(int x)     // x次幂
{
    int n = x * x;
    return n;
}
