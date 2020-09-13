
#include <iostream>
int main()
{
    using namespace std;
    
    unsigned int li_cheng_Gongli;
    
    const int gong_li_sheng = 100;  // 一百公里等于一升
    const float gong_li_yingli = 0.6213712;  //一公里等于0.6213712英里
    const float shen_jialun = 0.2199692;    //一升等于0.2199692加仑
    cout << "程序运行中...\n里程与油量换算，请您输入里程数（公里）： ";
    cin >> li_cheng_Gongli;
    cout << li_cheng_Gongli << " 公里耗油 " << (float)li_cheng_Gongli / (float)gong_li_sheng << " 升\n";
    cout << li_cheng_Gongli << "（公里）等于 " << (float)li_cheng_Gongli * (float)gong_li_yingli << "（英里)\n";
    cout << (float)li_cheng_Gongli / (float)gong_li_sheng << "（升）等于 " << ((float)li_cheng_Gongli / (float)gong_li_sheng) * shen_jialun << "（加仑）\n";
    cout << (float)li_cheng_Gongli * (float)gong_li_yingli << "（英里)耗油 " <<((float)li_cheng_Gongli / (float)gong_li_sheng) * shen_jialun << "（加仑）\n";
    
    
    
    
    
    
    
    return 0;
}
