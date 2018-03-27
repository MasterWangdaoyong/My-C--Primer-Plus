#include <iostream>
#include <cstring>
#include <string>
int main()
{
    using namespace std;
    
    
    string quizscores = "?aoyong";
    char x_y = 'a';
    while (quizscores != "daoyong")
    {
        cout << quizscores << endl;
        quizscores[0] = x_y;
        x_y++;
    }
    
    
    cout << "Doing it dangerously wrong: " << quizscores << endl;
    
    return 0;
}
//5-10利用while 循环修改5-10原来地
