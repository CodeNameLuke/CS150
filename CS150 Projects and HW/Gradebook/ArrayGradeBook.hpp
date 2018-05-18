//
//  gradeBook.h
//  Ch_6_Practice
//
//  Created by Luke Silva on 5/17/18.
//  Copyright © 2018 Luke Silva. All rights reserved.
//


#ifndef gradeBook_hpp
#define gradeBook_hpp
#include <array>
#include <string>
using namespace std;

class GradeBook{
    
public:
    
    static const size_t students = 10;
    
    GradeBook(const string &, const array<int , students> &);
    void setCourseName(const string&);
    string getCourseName() const;
    void displayMessage() const;
    void processGrades() const;
    int getMaximum() const;
    int getMinimum() const;
    double getAverage() const;
    void outputBarChart() const;
    void outputGrades() const;
    
private:
    
    string courseName;
    array<int, students> grades;
    
    
    
};





#endif /* gradeBook_hpp */
