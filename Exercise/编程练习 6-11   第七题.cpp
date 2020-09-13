//
//  编程练习 6-11   第七题.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/6/14.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>
#include <cctype>
const int size = 20;
int main()
{
    using namespace std;
    
    char words[size];
    int i,i_a,i_b,i_c;
    i = i_a = i_b = i_c = 0;
    
    cout << "Enter words (q to quit): \n";
    cin >> words;
    
    while (words[0] != 'q')
    {
        switch (words[0])
        {
            case 'a': i_a++;
                // ...  可以添加元音等...
                break;
            case 'b': i_b++;
                //...
                break;
            case 'c': i_c++;
                break;
            default:
                break;
        }
        
        cin >> words;
    
    }
    
    cout << "words beginning with vowels: " << i_a << endl;
    cout << "words beginning with consonants: " << i_b << endl;
    cout << "others: " << i_c << endl;
    
    
    return 0;
}
