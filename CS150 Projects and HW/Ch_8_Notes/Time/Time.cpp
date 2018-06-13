//
//  Time.cpp
//  Ch. 8 Practice
//
//  Created by Luke Silva on 6/12/18.
//  Copyright © 2018 Luke Silva. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.hpp"

using namespace std;

Time::Time() : hour(0), minute(0), second(0)
{
}

void Time:: setTime(int hours, int minutes, int seconds){
    
    //validate hours minutes and seconds
    
    if ( ( hours >= 0 && hours < 24 ) && ( minutes >= 0 && minutes < 60 ) &&
        ( seconds >= 0 && seconds < 60 ) ){
        
        hour = hours;
        minute = minutes;
        second = seconds;
        
        
    }else{
        
        throw invalid_argument("Hour, Minute, and/or Second is out of range.");
            
        }
}

void Time::printUniversal() const{
    
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << setw(2) << second;
    
}

void Time:: printStandard() const{
    
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setw(2) << minute << ":" <<  setw(2) << second
    << (hour < 12 ? " AM" : " PM");
    
}



