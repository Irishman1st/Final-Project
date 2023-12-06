#include <stdio.h>
#include <stdlib.h>

char gameBoard[10][10];


void printBoard(){

	int i, j;

	printf("\n               Battleship! \n");
    	printf("\n -----------------------------------------\n");

  for(i = 0; i < 10; i++){
    printf(" | ");
    	for(j = 0; j < 10; j++){
      		printf("%c | ", gameBoard[i][j]);
    	}
    	printf("\n -----------------------------------------\n");
  }
	printf("\n");

}

//Maybe - Randomly place ships on the board.  Person vs "comp"
//Ships to use = Aircraft Carrier, Cruiser, Battleship, Submarine, Destroyer.
//Traditional size=    5         ,    3   ,      4    ,     3    ,     2

void shipToBoard(char gameBoard[10][10]){


}



int main(){

//Initialize battleship board to water '-'.

	int i = 0, j = 0;

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			gameBoard[i][j] = ' ';
		}
	}



//Print the board.
	printBoard();







	return 0;
}
