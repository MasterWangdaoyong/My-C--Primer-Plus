#include <iostream>    // 1、头文件调用
#include <cstring>
using namespace std;       //   2、所有外、内部函数使用STD空间命名
char * getname(void);        //   3、外部公共函数，输入为该函数void的值
int main()     //
{
	char * name;   //   8、创建指针
	
	name = getname();    //  9、第一次调用 char * getname(void)函数。name是内存地址，*name是name内存地址存的东西（char数组）
	cout << name << " at " << (int *) name << endl;      //  （int*） 功能？ ＝ &name？  (但好像内存地址并不一样)？   102页，是不是强制类型转换？？？！！
	delete [] name;    //   10、清除指针，释放内存

	name = getname();   // 10、第二次调用 char * getname(void)函数。
	cout << name << " at " << (int *) name << endl;           
	delete [] name;


	cin.get();
	cin.get();
	return 0;
}

char * getname()    //      3、空括号反回void值  内存地址
{
	char temp[80];       //    3.1、创建char(字符串，最多80个字符) 数组temp。 如：temp[0], temp[1], temp[2]......temp[......]={"a,b,c,d,e......"}
	cout << "Enter last name: ";
	cin.getline(temp, 80);      // 3.2、在原程序清单4－22  修改为整行输入：包含空格，等等字符，只要在80个字符内都可以输入。cin.getline() 功能祥见78页
	char * pn = new char[strlen(temp) + 1];  // 3.3、创建char类指针 pn，动态内存，地址中内存长度在原80数组地址中上加了1 char单位，strlen功能见85页
	strcpy(pn, temp);  //  3.4、内存复制、粘贴，从temp到pn

	return pn;        //  3.5pn为void值，pn是内存地址
}