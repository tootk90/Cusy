#include <stdio.h>
#include "type.h"
#include "mappa.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int currentPosition;
int thereIsEnemy;
int flagFazio = 1;
int flagVincent = 1;

Room stanze[10][10];

void GenerateMaze(){
	int i, h;
	for (i = 0; i <= 10; i++){
		for (h = 0; h <= 10; h++){
			stanze[i][h].walkable = rand() % 2;
			stanze[i][h].enemy = 0;
			stanze[i][h].name = (char*)"Stanza";
		}
	}
	stanze[0][0].walkable = 1;
}


void move(POS *attuale, int dir){
	int x = (*attuale).x;
	int y = (*attuale).y;

	switch (dir) {
		case 0:  //up
			if ((stanze)[x][y - 1].walkable == 1) {
				(*attuale).y -= 1;
			}
			else
				printf("\nDi fronte a te c'e' un muro!");
			break;
		case 1:  //left
			if ((stanze)[x-1][y].walkable == 1) {
				(*attuale).x -= 1;
			}
			else
				printf("\nDi fronte a te c'e' un muro!");
			break;
		case 2:  //right
			if ((stanze)[x+1][y].walkable == 1) {
				(*attuale).x += 1;
			}
			else
				printf("\nDi fronte a te c'e' un muro!");
			break;
		case 3:  //down
			if ((stanze)[x][y+1].walkable == 1) {
				(*attuale).y += 1;
			}
			else
				printf("\nDi fronte a te c'e' un muro!");
			break;
		default:
			break;
	}

        
    }




void GenerateEnemies() {						// Controlla se all'interno della mappa sono presenti Fazio e la Cusy e,
	srand((unsigned int)time(NULL));			// in caso contrario, li genera.
	int i, h;
	bool CusyLives = 0;
	bool FazioLives = 0;
	bool VincentLives = 0;
	
    
	
	for (i = 1; i < 45; i++) {
		for (h = 0; h < 45; h++){
			if (stanze[i][h].enemy == 1)
				CusyLives = 1;
			if (stanze[i][h].enemy == 2)
				FazioLives = 1;
			if (stanze[i][h].enemy == 3)
				VincentLives = 1;
		}
	}

	if (CusyLives == 0) {
		do {
			i = rand() % 45;
			h = rand() % 45;	
		} 
		while (stanze[i][h].walkable == 0);

		stanze[i][h].enemy = 1;
	}

	if (FazioLives == 0) {
		do {
			i = rand() % 45;								//C'è la possibilità che i nemici si sovrascrivano.
			h = rand() % 45;
		}
		while (stanze[i][h].walkable == 0);

		stanze[i][h].enemy = 2;
	}

	if (VincentLives == 0) {
		do {
			i = rand() % 45;
			h = rand() % 45;
		} 
		while (stanze[i][h].walkable == 0);

		stanze[i][h].enemy = 3;
	}
}
    
void describe(){}
    

void checkEnemy(Room room) {
    thereIsEnemy = room.enemy;
    }
    
void showRoom(){
   // describe(stanze[currentPosition]);
   // checkEnemy(stanze[currentPosition]);
    
    
    }


/*-----stanze-----*/
