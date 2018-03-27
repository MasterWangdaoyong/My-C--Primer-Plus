//
//  程序清单  7--11.cpp
//  C++ Primer Plus
//
//  Created by 王道勇 on 2017/8/6.
//  Copyright © 2017年 王道勇. All rights reserved.
//

#include <iostream>

struct travel_time
{
    int hours;
    int mins;
};

const int min_hour = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);



int main()
{
    using namespace std;
    
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    
    travel_time trip = sum(day1, day2);
    
    cout << "Two days abc: ";
    
    show_time(trip);
    
    travel_time day3 = {4,32};
    
    cout << "Three-day total: ";
    
    show_time(sum(trip, day3));
    
    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time abc;
    abc.mins = (t1.mins + t2.mins) % min_hour;
    abc.hours = t1.hours + t2.hours +(t1.mins + t2.mins) / min_hour;
    return abc;
}

void show_time(travel_time t)
{
    std::cout << t.hours << " hours, " << t.mins << " minutes\n";
}
