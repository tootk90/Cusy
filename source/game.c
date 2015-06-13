#include <stdio.h>
#include <stdlib.h>
#include "..\headers\type.h"
#include "..\headers\azioni.h"
#include "..\headers\mappa.h"

//prova?

int cazzosincronizzati;


void game()
{
	Personaggio eroe, nemico;
	
	
	
	generaStat(&eroe);
	printf("Inserisci il nome del tuo eroe : ");
	eroe.nome = malloc(20 * sizeof(char));
	fgets(eroe.nome, 20, stdin);
	
	nemico.nome = "La Cusimano";
	generaStat(&nemico);
    nemico.vita = 100;
	
	
    showRoom();
   /* while(isAlive(nemico)){
    
    showStat(nemico);
    showStat(eroe);
    attack(eroe, &nemico);
    
	}
    */
    while(1){

    movement();   
    showRoom();
    checkFight(&nemico, eroe);
    if(currentPosition == 13){
        break;
        }
    }
    
  

    printf("\n\n\n-------HAI VINTO!-------\n");
   exit(0);
	

}


void intro(){
    printf("Benvenuto nel castello della Cusimano.\n"
           "Per giocare ti servira un foglio e una matita per disegnare la mappa.\n"
           "Per spostarti utilizza i tasti 'wasd' e digita invio ad ogni inserimento\n"
           "il tuo scopo e' arrivare alla fine.\n"
           "Buona fortuna\n");
    getchar();
    }
