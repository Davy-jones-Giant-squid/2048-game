#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define BOARD 64

void intro();
void restart();
void exit();

int main(){
	char userInput;
	char board[12];
	int boardSize;
	intro();
	printf("enter board size: ");
	scanf(" %d", &boardSize);

	int i;
	for(i=0; i<boardSize; i++){
		board[i] = '. ';
	}
	printf("%c", board[0]);


	return 0;
}
	

void intro(){
	
	printf("Sabine Ye (sye)\n");
	printf("UIC CS 141, Spring 2014\n");
	printf("Welcome to 1024 and More.\n");
	printf("This program is based off of Gabriele Cirulli's game online at\n");
    printf("bit.ly/great2048\n\n");

	printf("For each move enter a direction as a letter key, as follows:\n");
    printf("  W \n");
  	printf("A S D\n");
	printf("where A=left,W=up, D=right and S=down.\n\n");

	printf("After a move, when two identical valued tiles come together they\n"); 
	printf("join to become a new single tile with the value of the sum of the\n");
	printf("two originals. This value gets added to the score.  On each move\n");
	printf("one new randomly chosen value of 2 or 4 is placed in a random open\n"); 
	printf("square.  User input of r restarts the game, and x exits the game.\n");

	return;
}

void restart(){

}

void exit(){
	printf("Exiting ...\n");
	exit(0);
}