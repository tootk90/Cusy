#ifndef TYPE_H
#define TYPE_H
    typedef struct personaggio{
	int vita;
	int atk;
	char *nome;
	
	} Personaggio;
    
    typedef struct room{
        char name[20];
        int enemy;
        
        } Room;
        
    #endif