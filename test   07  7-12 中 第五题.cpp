//
//  test   07  7-12 中 第五题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/13.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

double m_max(const double * shu, int x);

int main()
{
    using namespace std;
    double abc[7] = {0.2,1.2,0.1,56,11,22,15};
    //double * bcd = abc;   //解除引用  *(bcd+i)
    //double * bcd = abc 或者 double * bcd = &abc[0] 同样的效果
    double ccd = m_max(abc, 7);
    cout << ccd << endl;
    return 0;
}


double m_max(const double * shu, int x)
{
    using namespace std;
    const double * ab;
    double a_max = 0;
    ab = shu;
    int yy = 0;
    int y = 1;
    while (ab != shu+x && y < 8)
    {
        yy++;
        if ((*ab) < (*(ab+y)))
        {
            cout << yy << " | ";
            if((*ab) - (*(ab+y)) < 0)
            {
                cout << " 两  " << *ab << " < " << *(ab+y) ;
                a_max = *(ab+y);
                cout << " = " ;
            }
            //a_max = *(ab+y);
            cout << a_max <<endl;
            ab++;
            continue;
        }
        else if ((*ab) > (*(ab+y)))
        {
            cout << yy << " | ";
            if((*ab) - (*(ab+y)) >0)
            {
                cout << " 后  " << *ab << " > " << *(ab+y) ;
                a_max = *ab;
                cout << " = " ;
            }
            cout << a_max << endl;
            y++;
            continue;
        }
        else if ((ab+y) > shu+x)
        {
            break;
        }
    }
    return a_max;
}



