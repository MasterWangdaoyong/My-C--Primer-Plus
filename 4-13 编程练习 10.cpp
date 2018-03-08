#include <iostream>
#include <array>
int main()
{
	using namespace std;

	array<float, 3> run_40;


	cout << "请输入三次40米跑的成绩(单位秒)\n";
	cout << "第一次40米跑的成绩： ";
	cin >> run_40[0];
	cout << "第二次40米跑的成绩： ";
	cin >> run_40[1];
	cout << "第三次40米跑的成绩： ";
	cin >> run_40[2];
	cout << endl;

	cout << "根据三次的成绩，平均成绩为： " << (run_40[0] + run_40[1] +run_40[2])/3 << " 秒。\n";

	cout << "数据组占用内存大小： " << sizeof(run_40) << " 字节。";

	cin.get();
	cin.get();
	return 0;
}