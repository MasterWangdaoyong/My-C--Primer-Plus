#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string first_name;
	string last_name;
	cout << "请输入您的姓： ";
	getline(cin, first_name);
	cout << "请输入您的名： ";
	getline(cin, last_name);
	cout << "Here's the information in a single string: " << last_name << " , " << first_name << endl;

	cin.get();
	cin.get();



	return 0;
}