//
//  queenAttack.cpp
//  CPP-Exercises
//
//  Queen Attack
//  given two positions of queen on a chess board, output if they can attack each other
//

#include <iostream>
using namespace std;

void printArray(char *board[10][19]){
    
    cout << board << endl;
}

int main(){
    char board[10][19] = {{' ',' ','a',' ','b',' ','c',' ','d',' ','e',' ','f',' ','g',' ','h',' ',' '},
        {'8',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','8'},
        {'7',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','7'},
        {'6',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','6'},
        {'5',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','5'},
        {'4',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','4'},
        {'3',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','3'},
        {'2',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','2'},
        {'1',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','1'},
        {' ',' ','a',' ','b',' ','c',' ','d',' ','e',' ','f',' ','g',' ','h',' ',' '}
    };
    
    char *ptr[10][19];
    
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 19; j++){
            ptr[i][j] = &board[i][j];
        }
    }
    
    printArray(ptr);
    
        return 0;
}
