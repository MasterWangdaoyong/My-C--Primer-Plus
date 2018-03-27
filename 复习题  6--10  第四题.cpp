//
//  复习题 6-10 第四题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/3.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    //if (weight < 125 && weight >= 115)      --a
    //if ((ch == 'q') || (ch =='Q')           --b
    //if ((x%2) !=1 && x != 26)               --c     标准答案 x%2 == 0 ??
    //if ((x%2) !=1 && (x%26) == 1)     X不是26的倍数有问题？！            --d     标准答案 x%26 == 0 ??
    //if ((donation < 2000 && donation > 1000 )|| (guest ==1))      --e
    //if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))     --f
    //if (!!x == 0)    复习题 6-10 第五题      标准答案  不一定
    //{int x; cin >> x; if (x > 0) cout << x << endl; else cout << 0-x << endl;}   复习题 6-10 第六题
    int a_grade,b_grade,c_grade,d_grade,f_grade = 0;
    char ch;
    cin >> ch;
    while (ch != 'q' && ch != 'Q')
    {
        switch (ch)
        {
        case 'A': cout << a_grade++;
            break;
        case 'B': cout << b_grade++;
            break;
        case 'C': cout << c_grade++;
            break;
        case 'D': cout << d_grade++;
            break;
        default : cout << f_grade++;
        }
        cin >> ch;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
