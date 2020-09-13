//编程练习2

#include <iostream>

int mytest(int);
int main()
{
    using namespace std;
    int chang;
    cout << " 请输入长度 : " ;
    cin >> chang;
    cout << endl;
    int mashu = mytest(chang);
    cout <<  chang << " 长 = ";
    cout << mashu << " 码数 ";
    cin.get();
    cin.get();
    return 0;
}

int mytest(int xyz)
{
    int mashu = 220 * xyz;
    return mashu;
}