#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>


#define SIZE 12

using namespace std;


void mazeGenerator(char a[12][12]);  //initialzes the function

int main(){
    srand(time(0));                    //to randomize the maze
    char maze[12][12];                 //creates the maze
    
    
    mazeGenerator(maze);              //calls the function
}

void mazeGenerator(char a[12][12]){   //function to create the maze
    int start_flag =0, end_flag=0;
    
    for(int d = 0; d<SIZE; d++){ //Rows  //Sets the walls
        for(int e=0; e<SIZE; e++){ //Col
            a[d][e] = '#';
        }
    }
    
    int flagu=2;
    for(int b = 1; b<SIZE-1; b++){ //Rows  //Sets the start and end
        for(int c=1; c<SIZE-1; c++){ //Col
            int path = (rand() %3 );
            
            
            if(start_flag==0){         //Creates the starting part for the maze on the right side
                int random = (rand() % 10 + 1);
                a[random][0] = '.';
                a[random][1]= '.';
                
                start_flag = 1;
            }
            
            
            if(end_flag==0){           //Creates the end point on the left side of the maze
                int random2 = (rand()% 10 + 1);
                a[random2][11] = '.';
                a[random2][10]= '.';
                end_flag=1;
            }
            
            if(a[b-1][c-1]=='#'&&a[b-1][c+1]=='#'){  //creates the outer walls
                a[b][c]='.';
            }
            
            if(a[b-1][c]=='.'&&a[b][c+1]=='.'&&a[b-1][c+1]=='.'){  //randomly sets sets walls
                a[b][c]='#';
            }
            
        }
    }
    
    int flag_test = 0;
    
    for(int y= 1; y<SIZE-1; y++){   //randomly sets a path through the maze
        a[y][(rand()%10+1)]= '.';
        a[(rand()%10+1)][y]= '.';
    }
    
    
    
    for(int p = 0; p<SIZE; p++){      //prints the maze
        for(int q = 0; q<SIZE; q++){
            
            cout<<  a[p][q] << " ";
        }
        cout << endl;
    }
}
