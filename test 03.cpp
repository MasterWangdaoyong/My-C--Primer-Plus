#include <iostream>
struct leixing
{
    std::string name;
    float shenggao;
    int tizhong;
}ren2;

int main()
{
    using namespace std;
    leixing ren1[2] = {
        {"Wang jianping",165.5,160},
        {"Dark gold",133.2,155}
    };
    cout << ren1[1].name << endl;
    ren2 = ren1[0];
    cout << ren2.name << endl;
    return 0;
}
