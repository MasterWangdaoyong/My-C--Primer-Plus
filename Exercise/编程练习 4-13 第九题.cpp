#include <iostream>
#include <string>

using namespace std;


struct CandyBar
{
    string ping_pai;
    float zong_liang;
    int long_liang;
};

int main()
{
    CandyBar * snack = new CandyBar;    //祥细方法见115页
    
    cout << "请输入品牌1(文字): ";
    cin >> (*snack).ping_pai;
    cout << "请输入重量1(数字): ";
    cin >> (*snack).zong_liang;
    cout << "请输入能量1(数字): ";
    cin >> (*snack).long_liang;
    
    cout << "品牌1: "<< snack->ping_pai<< endl;
    cout << "重量1: "<< snack->zong_liang<< endl;
    cout << "能量1: "<< snack->long_liang<< endl;
    cout << &snack->ping_pai << endl; //测试地址
    //delete snack;         // 删除后 可再次调用？！  XCODE上面任何报错
    //CandyBar * snack = new CandyBar;   //就算在第一次delete
    cout << "请输入品牌2: ";
    cin >> (*snack).ping_pai;
    cout << "请输入重量2: ";
    cin >> (*snack).zong_liang;
    cout << "请输入能量2: ";
    cin >> (*snack).long_liang;
    
    cout << "品牌2: "<< snack->ping_pai<< endl;
    cout << "重量2: "<< snack->zong_liang<< endl;
    cout << "能量2: "<< snack->long_liang<< endl;
    cout << &snack->ping_pai << endl;   //测试地址
    //delete  snack;    // 报错！   不能二次删除此new地址！
    
    cout << "请输入品牌3: ";
    cin >> (*snack).ping_pai;
    cout << "请输入重量3: ";
    cin >> (*snack).zong_liang;
    cout << "请输入能量3: ";
    cin >> (*snack).long_liang;
    
    cout << "品牌3: "<< snack->ping_pai<< endl;
    cout << "重量3: "<< snack->zong_liang<< endl;
    cout << "能量3: "<< snack->long_liang<< endl;
    cout << &snack->ping_pai << endl;
    
    delete  snack;
    
    cout << "指针大小：" << sizeof(snack) << " 字符\n";
    cin.get();
    cin.get();
    return 0;
}
//此程序不能二次删除 动态内存！！！  这种是无限覆盖写入动态内存   后面将不能再次显示前面的输入
