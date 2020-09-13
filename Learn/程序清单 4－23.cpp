#include <iostream>    //不怎么明白 ->用法与.用法  还有 const  xxx ** xx = xx 与数组的运用 
struct antarctica_years_end
{
	int year;
};
int main()
{
	using namespace std;
	antarctica_years_end s01, s02, s03;
	s01.year = 1000;
	antarctica_years_end * pa = &s02;
	pa->year = 2000;
	antarctica_years_end trio[3];
	trio[0].year = 3000;
	cout << trio->year << endl;
	const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year << endl;
	const antarctica_years_end ** ppa = arp; 
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb+1))->year << endl;
	cin.get();
	cin.get();
	return 0;
}