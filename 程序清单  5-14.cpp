#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();   //到现在 程序总运行时间
    while ( clock() - start < delay ) //此时到现在（第二次反回更新时间）减去程序总运行时间    当小于delay时一直循环   大于等于或等于delay时循环体停止
        ;
    cout << "done \a\n";
    cout << start << endl;
    cout << clock() << endl;
    cout << delay << endl;
    cout << CLOCKS_PER_SEC;
    
    
    
    return 0;
}
