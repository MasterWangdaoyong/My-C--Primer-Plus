#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char word[5] = "??zz";
    for (; strcmp(word, "zyzz");)
    {
        for (char i = 'a'; int(i) < 250; ++i)
        {
            for (char x = 'a'; int(x) < 250; ++x)
            {
                cout << word << endl;
                word[0] = i;
                word[1] = x;
                
            }
        }
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}

//同时循环word[0]与word[1] 测试其地址 4月30号  无解！


//利用这种   可以做一个密码类的程序！
