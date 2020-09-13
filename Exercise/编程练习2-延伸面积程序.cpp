//  编程练习2-延伸面积程序.cpp
#include <iostream>
int mianjiy(int);
int mianjix(int);
int main()
{
    using namespace std;
    int C;
    int B;
    cout << "请输入物体长：";
    cin >> C;
    cout <<endl;
    cout << "请输入物体宽：";
    cin >> B;
    int mianji = mianjix(C) * mianjiy(B);
    cout << " 面积大小＝ ";
    cout << mianji;
    cin.get();
    cin.get();
    return 0;
}

int mianjix(int C)
{
    int chang;
    chang = C;
    return chang;
}

int mianjiy(int B)
{
    int kuai;
    kuai = B;
    return kuai;
}
