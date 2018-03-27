//
//  test   07.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/12.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
//复习题目  7-12 中 第4题
void xxx(int * name_begin, int * name_end, int number);

int main()
{
    using namespace std;
    int  * abc;
    xxx(abc, abc+2, 0);
    
    
    return 0;
}

void xxx(int * name_begin, int * name_end, int number)
{
    using namespace std;
    int * x;
    for (x = name_begin; x != name_end; x++)
    {
        *x = number;
        cout << *x << endl;  //注意只能放在循环里面
    }
}





