//  编程练习4.cpp
#include <iostream>
int yueshu(int);

int main()
{
    using namespace std;
    int n;
    int z;
    cout << "请输入你的年龄： ";
    cin >> n;
    z = yueshu(n);
    cout << "该年龄里包含 " << z << " 月。";
    cin.get();
    cin.get();
    return 0;
    
}


int yueshu(int n)
{
    int x = n * 12;
    return x;
}