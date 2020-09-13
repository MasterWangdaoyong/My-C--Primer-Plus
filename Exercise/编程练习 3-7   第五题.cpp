
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    unsigned long long zong_renshu,country_renshu;
    
    
    cout << "Enter the world's population: ";
    cin >> zong_renshu;
    cout << "Enter the population of the US: ";
    cin >> country_renshu;
    
    float baifeng_renshu = ((float)country_renshu / (float)zong_renshu) * 100;
    // 在函数中强制转换变量 使用小括号“（）” 再使用类型  如：int float long 等
    // 然后在得出结果处 也是强制转换
    
    cout << "The population of the US is " << baifeng_renshu << "% of the world population.\n";
    
    
    
    
    return 0;
}
