#include <iostream> //4-12 复习题 
#include <array>
#include <cstring>
struct fish //8
{
	char pingzong;
	int zongliang;
	float changdu;
};
int main()
{
	using namespace std;
	char actor [30];    //1-a
	short betsie[100]; //1-b
	float chuck[13]; //1-c
	long double dipsea[64]; //1-d
	array<char, 30> actor; //2-1
	array<short, 100> betsie; //2-2
	array<float, 13> chuck; //2-3
	array<long double, 64> dipsea; //2-4
	int five[5] = {1,3,5,7,9}; //3
	int even = five[0] + five[4]; //4
	int idea[3] = {1,2,3};
	cout << idea[1] << endl; //5
	char name[] = {"cheeseburger"}; //6
	string name = "Waldorf Salad"; //7
	fish abb  {"liyu", 4, 13.5 }; //9
	enum Response {Yes=1, No=0, Maybe=2}; //10
	double * ted; //11
	
	float treacle[10]; 
	treacle  {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10}; 
	float * z_treacle = &treacle[0]; 
	cout << *treacle << *(z_treacle+ 9); //12
	


	unsigned int size; 
	cin >> size;
	int * z_y_yy = new int [size];	
	// cout << "请输入一个正整数： ";
	int zz_zz[*z_y_yy];





























	return 0;
}