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
	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},
		{"大众", 400.5, 6000},
		{"凼地", 543210.005, 12345678.12}
	};
	cout << "品牌1: "<<snack[0].ping_pai << endl;
	cout << "重量: " << snack[0].zong_liang << endl;
	cout << "能量: " << snack[0].long_liang << endl << endl;

	cout << "品牌2: "<<snack[1].ping_pai << endl;
	cout << "重量: " << snack[1].zong_liang << endl;
	cout << "能量: " << snack[1].long_liang << endl << endl;

	cout << "品牌3: "<<snack[2].ping_pai << endl;
	cout << "重量: " << snack[2].zong_liang << endl;
	cout << "能量: " << snack[2].long_liang << endl << endl;

	cin.get();
	cin.get();
	return 0;
}