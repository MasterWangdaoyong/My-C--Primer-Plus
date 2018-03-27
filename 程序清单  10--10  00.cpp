//
//  程序清单  10--10  00.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2018/2/4.
//  Copyright © 2018年 王道勇. All rights reserved.
//

#include <iostream>
#include "程序清单  10--10.hpp"
#include <cctype>

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
    << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "stack already empty\n";
                else
                {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye.\n";
    
    return 0;
}
