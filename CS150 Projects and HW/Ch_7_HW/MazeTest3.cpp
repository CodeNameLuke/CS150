#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm> //contains sort and binary_search
#include <string>

const size_t rows = 12;
const size_t columns = 12;
static int face = 6;

using namespace std;

void printArray(const array< array<string, columns> , rows> &);
void mazeTraverse(array< array<string, columns> , rows> &, int startingRow, int startingColumn);
void printMaze(char * maze[12][12]);
void mazeTraverse(char* maze[12][12]);


int main()
{
    
    int i = 0;
    int start;
    int xpos;
    
    char *array1[12][12] = {
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

    
    
    for (i = 0; i <12; i++)
         if (array1[i][0] == "." ) {
            start = i;
            array1[start][0] = "x";
            xpos = start;
            break;
        }
    
    cout << "X is the starting point.\n";
    cout << "Press Enter to Begin.\n\n\n";
    getchar();
    printMaze(array1);
    getchar();

    
    
 
    return 0;
}

void printMaze(char* maze[12][12]){
    
    int x = 0;
    int y = 0;
    
    
    for(x = 0; x < 12; x++){
        
        for(y = 0; y < 12; y++){
           
             cout << maze[x][y] << " ";
            
        }
        
        cout << endl;
        
    }
    
    cout << "\n \n";
    
    
    mazeTraverse(maze);
    
}

void mazeTraverse(char* maze[12][12]){
    
    int x = 0;
    int y = 0;
    

    
    for (x = 0; x < 12; x++) {
        for (y = 0; y < 12; y++) {
            if (maze[y][x] == "x")
                break;
        }
        if(maze[y][x] == "x")
            break;
    }
    
    for (y = 0; y < 12; y++) {
        for (x = 0; x < 12; x++) {
            if (maze[y][x] == "x")
                break;
        }
        if (maze[y][x] == "x")
            break;
    }
    
    maze[y][x] = ".";
    
    switch (face) {
        case 6:{
            if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x";
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x";
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            }
            break;
            
        }
        case 8:{
            if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x";
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x";
                face = 5;
            }
            break;
            
        }
        case 4:{
            if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x";
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x";
                face = 6;
            }
            break;
            
        }
        case 5:{
            if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x";
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x";
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            }
            break;
            
        }
    }
    
    printMaze(maze);
    
}

