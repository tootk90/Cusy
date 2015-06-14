#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "azioni.h"
#include "mappa.h"



void game()
{
	Personaggio eroe, nemico;
	
	
	
	generaStat(&eroe);
	printf("Inserisci il nome del tuo eroe : ");
	eroe.nome = malloc(20 * sizeof(char));
	gets(eroe.nome);
	
	nemico.nome = "La Cusimano";
	generaStat(&nemico);
    nemico.vita = 100;
    showStat(eroe);
	
	
    showRoom();
   /* while(isAlive(nemico)){
    
    showStat(nemico);
    showStat(eroe);
    attack(eroe, &nemico);
    
	}
    */
    while(1){

    movement();   
  //  showRoom();
    checkFight(&nemico, &eroe);
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
