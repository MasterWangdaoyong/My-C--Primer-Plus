#include <iostream>
int main()
{
    using namespace std;
    const int daiwei = 10;
    int yingchi,yingcun;
    cout << "程序运行中...\n请在该位置输入您的身高（英寸）____\b\b\b\b";
    cin >> yingcun;
    
    yingchi = yingcun / daiwei;
    
    cout << "根据换算的结果是____" << yingchi << "(英尺)高" << endl;
    
    return 0;
}