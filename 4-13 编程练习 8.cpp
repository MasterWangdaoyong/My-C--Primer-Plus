#include <iostream>
#include <string>

using namespace std;

struct lei
{
	string name;
	float zhi_jing;
	float zong_liang;
};

int main()
{
	cout << "大家好，我的名字叫：王健平\n下面是我记录的小吃公司名称、直径、重量\n";

	lei * xing_xi = new lei;
	
	cout << "请优先输入东西的直径(CM)：";
	cin >> xing_xi->zhi_jing;    
	cout << "品牌：";     
	cin >> xing_xi->name;          //这种方法能整行输入,但不能间断输入   可以用getline(cin, a_1.name)整行输入 
	cout << "重量(KG)：";
	cin >> xing_xi->zong_liang;
	
	
	
	
	
	cout << "品牌：" << xing_xi->name << "\n直径："<< xing_xi->zhi_jing << " CM\n重量："<< xing_xi->zong_liang <<" KG"<< endl;

	delete  xing_xi;    //用完了再删除   释放内存
	cout <<"数据存储大小：" << sizeof(xing_xi) << "字节(b)";
	cin.get();
	cin.get();
	return 0;
}
// 指针* xing_xi 要比数组 lei a_1 占用内存小得多!!!     4-13 编程练习 7 与 4-13 编程练习 8 相比