//
//  编程练习 5-9   第六题.cpp
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
        const int Airsize = 12;
        const int years = 3;
        
        int year = 0;
        int one = 0;
        int two = 0;
        int three = 0;
        
        cout << "程序运行中...\n";
        for (clock_t now = CLOCKS_PER_SEC; now < 5000 * CLOCKS_PER_SEC; now++)
            ;
        cout << "下面是《C++ For Fools》三年内的销售情况：\n\n";
        for (clock_t now = CLOCKS_PER_SEC; now < 10000 * CLOCKS_PER_SEC; now++)
            ;

        
        
        char * Year[3] = {"第一年 ","第二年 ","第三年 "};
        
        
        char * mouth[Airsize] =
        {
            "一月：","二月：","三月：","四月：","五月：","六月：",
            "七月：","八月：","九月：","十月：","十一月：","十二月：",
        };
        
        int yue[years][Airsize] =
        {
            {3000,2000,1200,4000,2200,3211,4211,1232,1242,4422,1234,5221},
            {1000,2000,1200,4000,2200,3211,4211,1232,1242,4422,1234,15222},
            {900,2000,1200,4000,2200,3211,4211,1232,1242,4422,1234,105223},
        };
        
        
        for (year = 0; year < 3; year++)
        {
            for(int x = 0; x < 12; x++)
            {
                for (clock_t now = CLOCKS_PER_SEC; now < 70*CLOCKS_PER_SEC; now++)
                    ;
                cout << Year[year] << mouth[x] << yue[year][x] << "\t\n";
                one += yue[0][x];
                two += yue[1][x];
                three += yue[2][x];
                
            }
        }
        cout << "\n第一年卖出：" << one << " 份" << endl;
        cout << "第二年卖出：" << two << " 份" << endl;
        cout << "第三年卖出：" << three << " 份" << endl;
        cout << "三年总共卖出：" << one+two+three << " 份" << endl << endl;
        return 0;
    }

    
    
    
    
    
    
