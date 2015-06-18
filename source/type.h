#ifndef TYPE_H
#define TYPE_H
#include <stdbool.h>

    typedef struct personaggio{
	int vita;
	int atk;
	char *nome;
	
	} Personaggio;
    
    typedef struct room{
        char *name;
		int walkable;
		int visited;
		int enemy;
        
        } Room;
    
	typedef struct position {
		int x;
		int y;
	} POS ;
    #endif