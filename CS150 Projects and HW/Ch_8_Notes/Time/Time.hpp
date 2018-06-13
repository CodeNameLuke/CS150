//
//  Time.hpp
//  Ch. 8 Practice
//
//  Created by Luke Silva on 6/12/18.
//  Copyright © 2018 Luke Silva. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>

class Time{
    
public:
    
    Time(); // Constructor
    void setTime(int, int, int);
    void printUniversal() const;
    void printStandard() const;
    
    
private:
    
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    
    
};


#endif /* Time_hpp */
