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
	
	lei a_1;  //定义一个名称就OK了  这样就可以了！！！
		
	cout << "请输入品牌：";
	cin >> a_1.name;   //这种方法能整行输入,但不能间断输入   可以用getline(cin, a_1.name)整行输入
	cout << "东西的直径(CM)：";
	cin >> a_1.zhi_jing;
	cout << "重量(KG)：";
	cin >> a_1.zong_liang;
	
	
	
	
	
	cout << "品牌：" << a_1.name << "\n直径："<< a_1.zhi_jing << " CM\n重量："<< a_1.zong_liang <<" KG"<< endl;

	cout <<"数据存储大小：" << sizeof(a_1) << "字节(b)";
	cin.get();
	cin.get();
	return 0;
}