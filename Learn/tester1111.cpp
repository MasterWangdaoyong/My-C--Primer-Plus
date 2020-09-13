#include <iostream>
int main()
{
	using namespace std;
	const int size = 4;
	int z;
	int x[size] = {5,30,10,20};
	int i = 0;
	for (i = 0 , i < size+1,  i++)
	{
		int y;                                                       
		y += int (&x[i+1]);
		z = y;
	}


	cout << z  <<endl;

	cin.get();
	cin.get();
	return 0;
}