#include <iostream>        //复习题  6－10  第七题
	int main()
{
	using namespace std;

	char ch;
	int a_grade = 0,b_grade = 0,c_grade = 0,d_grade = 0,f_grade = 0;

	cin >> ch;
	while (ch != 'q'  &&  ch != 'Q')                         //注意  and 的定义 
	{
		switch (ch)
		{
		case 'A' : cout << a_grade++ << endl;
			break;
		case 'B' : cout << b_grade++ << endl;
			break;
		case 'C' : cout << c_grade++ << endl;
			break;
		case 'D' : cout << d_grade++ << endl;
			break;
		default : cout << f_grade++ << endl;
				break;
		}
		cin >>ch;
		}


	cin.get();
	cin.get();
	return 0;

}

