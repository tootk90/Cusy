#ifndef MAPPA_H
#define MAPPA_H
    #include "type.h"
    extern int currentPosition;
    extern int thereIsEnemy;
	extern int flagFazio;
	extern int flagVincent;

    void move(int dir);
    void describe(Room room);
    void showRoom(void);

    void up(void);
    void down(void);
    void right(void);
    void left(void);

	void GenerateEnemies();


#endif