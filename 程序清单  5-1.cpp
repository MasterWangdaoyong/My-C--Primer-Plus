#include <iostream>
int main()
{
    using namespace std;
    int i;
    for (i=0;i<5;i++) //标准：for (初始化；测试；更新操作) body
        cout << "c++ knows loops.\n";  //body
    cout << "c++ knows when to stop.\n";
    return 0;
}
