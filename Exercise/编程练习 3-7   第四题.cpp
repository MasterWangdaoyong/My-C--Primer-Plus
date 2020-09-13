//
//  Test.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 16/12/7.
//  Copyright © 2016年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    const int feng_miao = 60;
    const int shi_miao = 3600;
    const int tian_miao = 86400;
    
    int zong_miao;
    
    cout << "程序运行中...\nEnter the number of seconds: ";
    cin >> zong_miao;
    
    int tian = zong_miao / tian_miao;
    int yu_shi = (zong_miao % tian_miao) / shi_miao;
    int yu_feng = ((zong_miao % tian_miao) % shi_miao) / feng_miao;
    int yu_miao = (((zong_miao % tian_miao) % shi_miao) % feng_miao);
    
    // 利用余数换算得出
    
    cout << zong_miao << " seconds = " << tian << " days, "  << yu_shi << " hours, " << yu_feng << " minutes, " << yu_miao << " seconds "  << endl;
    
    return 0;
}
