#include <iostream>
int main()
{
    using namespace std;
    int haoyou_sheng;
    
    const int gongli_sheng = 100; //100公里1升
    const float shen_Jialun = 0.2580;  //升与加仑换算
    const float gong_li_Yingli = 0.6214; //公里与英里换算
    cout << "程序运行中...\n请输入您耗油多少（升）：" ;
    cin >> haoyou_sheng;
    
    cout << "行驶距离大约：" << haoyou_sheng * gongli_sheng << "（公里）\n";
    
    cout << haoyou_sheng * gongli_sheng << "（公里）等于 " << (haoyou_sheng * gongli_sheng) * gong_li_Yingli << "（英里）\n";
    cout << haoyou_sheng << "（升）等于 " << haoyou_sheng * shen_Jialun <<"（加仑）\n";
    cout << "共行驶了 "<<(haoyou_sheng * gongli_sheng) * gong_li_Yingli <<"（英里）耗油 "<<haoyou_sheng * shen_Jialun << "（加仑）\n" ;
    cout << "根据换算结果得出：行驶1英里约耗油 " << (haoyou_sheng * shen_Jialun)/((haoyou_sheng * gongli_sheng) * gong_li_Yingli) << " 加仑\n\n";
    
    return 0;
}
