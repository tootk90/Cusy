#ifndef MAPPA_H
#define MAPPA_H
    #include "type.h"
    extern int currentPosition;
    extern int thereIsEnemy;
	extern int flagFazio;
	extern int flagVincent;

    void move(POS *pos, int dir);
    void describe();
    void showRoom(void);
	void GenerateMaze(void);


	void GenerateEnemies();


#endif