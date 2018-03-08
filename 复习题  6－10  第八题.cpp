#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	char choice;
	cin.get(choice).get();
	while (choice != 'Q' && choice != 'q')
	{
		switch (choice)
		{
		case 'a' :  cout << "\a\n\n";
			break;
		case 'b' : report();
			break;
		case 'c' : cout << "The boss was in all day.\n\n";
			break;
		case 'd' : comfort();
			break;
			default : cout << "That's not a choice.\n\n";
		}
		showmenu();
		cin.get(choice).get();
	}
	cout << "Bye!\n";
	cin.get();
	cin.get();
	return 0;
}
void showmenu()
{
	cout << "Please enter a,b,c,d,q: \n"
		"a) alarm\tb) report\t\n\c) alibi\td) comfort\t\nq) quit\n\n";
}
void report()
{
	cout << "35$\n\n";
}
void comfort()
{
	cout << "CEO\n\n";
}