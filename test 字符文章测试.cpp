
//
//  test 字符文章测试.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/15.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    
    
    string name;
    
    cout << "test: \n";
    
    //1 cin >> name;  //空格后不再输入
    //2 getline(cin,name);   //回车后不再输入
    cin.get(name);
    cout << " 1 " << name << endl;
    
    
    
    return 0;
}
