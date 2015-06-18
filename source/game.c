#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "azioni.h"
#include "mappa.h"


//Room stanze[DIM][DIM];



void game()
{
	Personaggio eroe, nemico;
	
	struct position coord = { 1, 1 };
	
	resetMaze(stanze);
	closeMaze(stanze);
	generateMazeAlg(stanze);
	closeMaze(stanze);
	stabilizeMap(stanze);
	PrintMazes(stanze);
	GenerateEnemies(stanze);
	
	generaStat(&eroe);
	printf("Inserisci il nome del tuo eroe : ");
	eroe.nome = malloc(20 * sizeof(char));
	scanf("%s", eroe.nome);
    fflush(stdin);
	
	nemico.nome = "La Cusimano";
	generaStat(&nemico);
    nemico.vita = 100;
    showStat(eroe);
	
	
    showRoom(stanze[coord.x][coord.y]);
	/* while(isAlive(nemico)){
    
    showStat(nemico);
    showStat(eroe);
    attack(eroe, &nemico);
    
	}
    */
    while(1){

	movement(&coord, stanze); 
	//showPos(stanze, coord);
	showRoom(stanze[coord.x][coord.y]);
	
    checkFight(&nemico, &eroe);

    if(currentPosition == 13){
        break;
        }
    }
    
  

    printf("\n\n\n-------HAI VINTO!-------\n");
   exit(0);
	

}


void intro(){
    printf(	"Benvenuto nel castello della Cusimano.\n"
			"Per spostarti utilizza i tasti 'wasd',\n"
			"il tuo scopo e' arrivare alla fine e sconfiggere la regina del castello.\n"
			"Buona fortuna\n");
    getchar();
    }
