#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);     
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << ".\n";


	cin.get();
	cin.get();
	return 0;
}

//getline(cin, XXX)       cin.get()     cin.getline()      区别???????       见81页
//getline(cin, XXX)               丢弃换行符“回车”键，见87页。没有字节限定的整行输入。     配合string类使用较佳？！ 有点模糊，似懂非懂
//cin.get(xxx,数目)               保留换行符“回车”键，到下一次要求输入时，如两次调用cin.get()将不能跨过该换行符。  处理方法见80页。  配合数组使用较佳？！有点模糊，似懂非懂
//cin.getline(xxx,数目)          因为数组数目，可以避免太长的输入。     配合数组使用较佳？！ 有点模糊，似懂非懂



