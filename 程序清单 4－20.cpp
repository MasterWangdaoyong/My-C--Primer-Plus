#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * pa;

	cout << animal << " and ";
	cout << bird << endl;

	cout << "Enter a kind of animal: ";
	cin >> animal;

	char * ps = animal;
	cout << ps << "\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << "\n";

	ps = new char [strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << & animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete []  ps;	
	cin.get();
	cin.get();
	return 0;
}