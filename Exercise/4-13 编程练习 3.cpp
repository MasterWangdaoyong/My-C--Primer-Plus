#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char first_name[20];
	char last_name[20];
	cout << "请输入您的姓： ";
	cin.getline(first_name, 20);
	cout << "请输入您的名： ";
	cin.getline(last_name, 20);
	cout << "Here's the information in a single string: " << last_name << " , " << first_name << endl;

	cin.get();
	cin.get();



	return 0;
}