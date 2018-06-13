//
//  main.cpp
//  Ch. 8 Practice
//
//  Created by Luke Silva on 6/12/18.
//  Copyright © 2018 Luke Silva. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    
    
    int b[] = 	{10, 20, 30 , 40 ,50 };
    
    int *bPtr = b;
    
    // Output built in array using array subscript notation.
    
    cout << "Array b displayed using subscript notation: " << endl;
    for ( size_t i = 0; i < 4; i++){
        
        cout << "b[" << i << "]" << " : " << b[i] << endl;
        
    }
    
    cout << "Array b displayed using pointer/offset notation: " << endl;
    for ( size_t i = 0; i < 4; i ++){
        
        cout << "*(bPtr + " << i << ")" << " = " << *(bPtr + i) << endl;
        
        
    }
    
    cout << "Array b displayed using pointer/subscript notation: " << endl;
    for ( size_t i = 0; i < 4; i++){
        
        cout << "bPtr[" << i << "] = " << bPtr[i] << endl;
        
    }
    
    
    return 0;
}
