//
//  test_二维数组.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/5/8.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    const int airsize = 4;
    const int Airsize = 15;
    
    char name[airsize][Airsize] =
    {
        "Daoyong Wang",
        "Xia po",
        "Ya liao",
        "Na Na"
    };
    
    int shenggao[airsize][Airsize] =
    {
        {11,22,33,44,55,66,77,88,99,100},
        {12,23,34,45,56,67,78,89,90,001},
        {01,00,02,03,04,05,06,07},
        {123,321,234,345,456,567,678,789}
    };
    
    for (int y = 0; y<Airsize; y++) //后循环
    {
        
            for (int x = 0; x<airsize; x++)  //先循环
        {
            cout << name[x] ;
            cout << " " << shenggao[x][y] << "\t"  ; //"\t" 横向制表符
            for (clock_t now = CLOCKS_PER_SEC ; now < 80*CLOCKS_PER_SEC; now++)
                ; //只是将就着用的延时数秒器   未解决一秒一秒递加
        }
            cout << endl;
        
    }
    
    
    return 0;
}
