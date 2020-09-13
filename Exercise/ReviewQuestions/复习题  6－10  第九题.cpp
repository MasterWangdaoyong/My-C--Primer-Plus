#include <iostream>
int main()
{
	using namespace std;
	int line = 0;
	char ch;
	while (cin.get(ch))
	{
		if (ch == 'Q')
			break;
		if (ch != '\n')
			continue;
		line++;
	}
	cout << line << endl;




	cin.get();
	cin.get();
	return 0;
}