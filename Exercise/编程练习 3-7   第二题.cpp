#include <iostream>
int main()
{
    using namespace std;
    float yinchi,yincun,zong_yincun,pang,zong_mi,qianke,zong_mi_pingfang,BMI;
    //yinchi 英尺  yincun 英寸 pang 磅  mi 米 千克 BMI
    const float yinchi_yincun = 12 ;   // 换算单位  英尺＝12英寸
    const float yincun_mi = 0.0254 ;    // 换算单位  英寸＝0.0254 米
    const float qianke_pang = 2.2 ;    // 换算单位  千克＝2.2磅
    
    cout << "程序运行中...\n请输入您的身高(几英尺)：";
    cin >> yinchi;
    cout << "英寸:";
    cin >> yincun;
    cout << "请输入您的体重（磅）：";
    cin >> pang;
    
    
    
    zong_yincun = yincun + yinchi * yinchi_yincun;
    zong_mi = zong_yincun * yincun_mi;
    qianke = pang / qianke_pang;
    zong_mi_pingfang = zong_mi * zong_mi;
    BMI = qianke / zong_mi_pingfang;      // 运算函数
    
    
    cout << "以英寸单位的方式显示您的身高： " << zong_yincun << endl;
    cout << "以米为单位的方式显示您的身高： " << zong_mi << endl;
    cout << "以千克为单位的方式显示您的体重： " << qianke << endl;
    cout << "BMI为体重（千克）除以身高（米）的平方： " << BMI << endl;
    
    
    
    
    
    cout << endl;
    
    
    return 0;
}
