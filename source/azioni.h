#ifndef AZIONI_H
#define AZIONI_H
    #include "type.h"
	void GenerateMaze(void);
    void generaStat(Personaggio *x);
    void showStat(Personaggio x);
    void attack(Personaggio a, Personaggio *b);
    int isAlive(Personaggio a);
    void movement(POS position);
    void checkFight(Personaggio *nemico, Personaggio *eroe);
    void startFIght(Personaggio *nemico, Personaggio eroe);
#endif