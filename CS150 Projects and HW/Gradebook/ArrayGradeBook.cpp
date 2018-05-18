//
//  gradeBook.cpp
//  Ch_6_Practice
//
//  Created by Luke Silva on 5/17/18.
//  Copyright © 2018 Luke Silva. All rights reserved.
//

#include "gradeBook.hpp"
#include "iostream"
#include "iomanip"


GradeBook::GradeBook(const string & name, const array<int, students> & gradesArray){
    
    courseName = name;
    grades = gradesArray;
    
}

void GradeBook::setCourseName(const string & name){
    
    courseName = name;
    
}

string GradeBook::getCourseName() const{
    
    return courseName;
    
}

void GradeBook::displayMessage() const{
    
    cout << "Welcome To The GradeBook for: " << getCourseName() << endl;
    
}

void GradeBook::processGrades() const{
    
    outputGrades();
    
    cout << "Maximum Grade is: " << getMaximum() << "\nMinimum Grade is: " << getMinimum() << endl;
    
    cout << "Class Average is: " << getAverage() << endl;
    
    outputBarChart();
    
}

int GradeBook::getMinimum() const{
    
    int minimum = 100;
    
    for(size_t items: grades ){
        
        if (items < 100){
            
            minimum = items;
            
        }
    }
    
    return minimum;
    
}

int GradeBook::getMaximum() const{
    
    int maximum = 0;
    
    for(size_t items : grades){
        
        if(items > maximum){
            
            items = maximum;
            
        }
    }
    
    return maximum;
    
    
}

double GradeBook::getAverage() const{
    
    int total = 0;
    int count = 0;
    
    
    
    for(size_t items : grades){
        
       total += items;
        count++;
        
        
    }
    
    double average = total / count;
    
    return average;
    
    
    
}

void GradeBook::outputBarChart() const{
    
    const size_t numberOfGradeBlocks = 11; // 0-9,10-19,20-29,...,90-99,100
    
    array<unsigned int, numberOfGradeBlocks> frequency = {};
    
    for(int items : grades){
        
        frequency[items / 10]++;
        
    }
    
    for(size_t count = 0; count < numberOfGradeBlocks; count++){
        
        if(count == 0){
            
            cout << "0-9: ";
            
            
        }else if(count == 10){
            
            cout << "100: " << setw(3);
            
        }else{
            
            cout << (count * 10) << "-" << ((count * 10) + 9) << ": ";
            
            
        }
        
        for(unsigned int stars = 0; stars < frequency[count]; stars++){
            
            cout << "*";
        
            
        }
        cout << endl;
        
    }
    
}

void GradeBook::outputGrades() const{
    
    cout << "All Grades Inputted: ";
    for(int items : grades){
        
        cout << items  << " ";
        
        
    }
}

