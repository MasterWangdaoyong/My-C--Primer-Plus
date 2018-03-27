#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word = "da?k";
    for (char ch = 'A'; word != "dark"; ch++)
    {
        cout << word << endl;
        word[2] = ch;
    }
    cout << "\n\nAfter loop ends, word is " << word << endl << endl;
    return 0;
}


