#ifndef MAPPA_H
#define MAPPA_H
    #include "type.h"

	#define DIM 50
    
	extern int currentPosition;
    extern int thereIsEnemy;
	extern int flagFazio;
	extern int flagVincent;

	void move(POS *pos, int dir, Room stanze[DIM][DIM]);
    void describe(Room room);
    void showRoom(Room room);
	void PrintMazes(Room stanze[DIM][DIM]);
//	void GenerateMaze(Room stanze[DIM][DIM]);
	void generateMazeAlg(Room stanze[DIM][DIM]);
	void stabilizeMap(Room stanze[DIM][DIM]);
	void resetMaze (Room stanze[DIM][DIM]);
	void closeMaze(Room stanze[DIM][DIM]);
	void GenerateEnemies(Room stanze[DIM][DIM]);
	
	bool CheckMaze(Room stanze[DIM][DIM]);


	//void GenerateMaze(Room [10][10]);

	Room stanze[DIM][DIM];
#endif