#ifndef MAPPA_H
#define MAPPA_H
    #include "type.h"

	#define DIM 10
    
	extern int currentPosition;
    extern int thereIsEnemy;
	extern int flagFazio;
	extern int flagVincent;

	void move(POS *pos, int dir, Room stanze[DIM][DIM]);
    void describe(Room room);
    void showRoom(Room room);
	void GenerateMaze(Room stanze[DIM][DIM]);
	
	void GenerateEnemies();


	void GenerateMaze(Room [10][10]);

	Room stanze[10][10];
#endif