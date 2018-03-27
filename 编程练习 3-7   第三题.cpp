
#include <iostream>
int main()
{
    using namespace std;
    
    float dou,feng,miao,zong_dou,zong_feng,zong_miao;
    
    const float dou_feng_miao = 3600;
    const float feng_miao = 60;
    
    
    cout << "程序远行中...\n请输入度： ";
    cout << "Enter a latitude in degrees,minutes,and seconds：" << endl;
    cout << "First, enter the degrees: ";
    cin >> dou;
    cout << "Next, enter the minutes fo arc: ";
    cin >> feng;
    cout << "Finally, enter the seconds of arc: ";
    cin >> miao;
    
    zong_miao = miao / dou_feng_miao;
    zong_feng = feng / feng_miao;
    zong_dou = dou + zong_feng + zong_miao;
    
    
    cout << dou << " degrees, " << feng << " minutes, " << miao << " seconds ";
    cout << " = " <<  zong_dou << " degrees\n";
    
    return 0;
    
}
