#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm> //contains sort and binary_search
#include <string>

const size_t rows = 12;
const size_t columns = 12;

using namespace std;

void printArray(const array< array<string, columns> , rows> &);
void mazeTraverse(array< array<string, columns> , rows> &, int startingRow, int startingColumn);


int main()
{
    array < array<string, columns> , rows > array1 = {
        "#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,
        "#" ,"." ,"." ,"." ,"#" ,"." ,"." ,"." ,"." ,"." ,"." ,"#" ,
        "." ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"#" ,"#" ,"#" ,"." ,"#" ,
        "#" ,"#" ,"#" ,"." ,"#" ,"." ,"." ,"." ,"." ,"#" ,"." ,"#" ,
        "#" ,"." ,"." ,"." ,"." ,"#" ,"#" ,"#" ,"." ,"#" ,"." ,"." ,
        "#" ,"#" ,"#" ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,
        "#" ,"." ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,
        "#" ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,"." ,"#" ,
        "#" ,"." ,"." ,"." ,"." ,"." ,"." ,"." ,"." ,"#" ,"." ,"#" ,
        "#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"." ,"#" ,"#" ,"#" ,"." ,"#" ,
        "#" ,"." ,"." ,"." ,"." ,"." ,"." ,"#" ,"." ,"." ,"." ,"#" ,
        "#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,"#" ,
        
    };

    
    printArray(array1);
    cout << endl;
    
    
 
    return 0;
}

void printArray(const array< array<string, columns> , rows > & array){
    
    for(size_t i = 0; i < array.size(); i++){
        
        for(size_t j = 0; j < array[rows].size(); j++){
            
            cout<< array[i][j] << " ";
            
        }
        cout << endl;
        
    }
    
}

void mazeTraverse(array< array<string, columns> , rows> & maze, int startingRow, int startingColumn){
    
    int rowPos = startingRow;
    int columnPos = startingColumn;
    
    maze[rowPos][columnPos] = "X";
    
    if(maze[rowPos++][columnPos] == "#" && maze[rowPos][columnPos++] == "."){
        
        mazeTraverse(maze, rowPos, columnPos++);
        
    }else if(maze[rowPos++][columnPos] == "#" && )
    
    
}


