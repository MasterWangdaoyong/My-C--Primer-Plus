#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char word[5] = "da?k";
    for (char ch = 'A'; strcmp(word, "dark"); ch++)
    {
        cout << word << endl;
        word[2] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}




//利用这种   可以做一个密码类的程序！
