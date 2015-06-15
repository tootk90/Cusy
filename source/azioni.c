#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#include "azioni.h"
#include "type.h"
#include "mappa.h"
#include "system.h"

#ifdef linux
#include "system.h"
#endif


#ifdef linux
char clear[] = "clear";
#endif // linux

#ifdef _WIN32
char clear[] = "cls";
#include <conio.h>
#endif // _WIN32


char direzione;

void generaStat(Personaggio *x){
	time_t t;

	srand((unsigned) time(&t));
	
	x->atk = rand()%20+1;
	x->vita = rand()%100+1;
	
	}

void showStat(Personaggio x){
	
	printf("%s ha  %d di attacco e %dHP\n", x.nome, x.atk, x.vita);
	}

void attack(Personaggio eroe, Personaggio *nemico){
        printf("%s attacca %s provocandogli %d punti di danno\n\n", eroe.nome, (*nemico).nome, eroe.atk);
        (*nemico).vita -= eroe.atk;
    }

int isAlive(Personaggio a){
    if(a.vita < 1){
        printf("\n %s e' stato ucciso!\n", a.nome);
        return 0;
        }else {
        return 1;}
        
    
    }
int isDead(Personaggio a){
    if(a.vita < 1){
       
        return 1;
        }else {
        return 0;
        }
        
    
    }
    

void movement(void){
	direzione = _getch();
    fflush(stdin);

	switch(direzione){
		case 'w':
			up();
            break;
		case 's':
			down();
            break;
		case 'd':
            right();
            break;
        case 'a':
            left();
            break;
        }
}
    
void checkFight(Personaggio *nemico, Personaggio *eroe){
	
    if(thereIsEnemy == 1){
        system(clear); //clear su osx e cls su win
        printf("\nIn questa stanza e' presente %s...", nemico->nome);
        if(nemico->vita > 1){
            printf("che non ha buone intenzioni\n\n");
            startFIght(nemico, *eroe);
            
            }
		else{
                printf("che e' in fin di vita,\n e ti lascia proseguire\n\n");
                }
        }
    if(thereIsEnemy == 2 && flagFazio == 1){
        printf("\nIn questa stanza e' presente il Prof. Fazio che ti Regala 50HP!\n");
       flagFazio = 0;
        eroe->vita += 50;
        showStat(*eroe);
        
        }
	if(thereIsEnemy == 3 && flagVincent == 1){
		char ans;
		int luck;
        printf("\nIn questa stanza e' presente la Stagliano' che ti chiede di seguirla nel suo ufficio\n"
					"...per parlare...\n"
					"Vuoi seguirla? (S/N)");
		scanf("%c", &ans);
		if (ans == 'S' || ans == 's'){
			luck = rand() % 2;
			switch (luck) {
				case 0:
					system(clear);
					getchar();
					printf("...");
					getchar();
					printf("\nSi sentono dei gemiti...");
					getchar();
					printf("\nVai via soddisfatto e con 50 HP in piu'!");
					eroe->vita += 50;
					break;
				case 1:
					system(clear);
					printf("La Stagliano' chiude la porta a chiave...");
					getchar();
					printf("\n...");
					getchar();
					printf("\nOh no! La Stagliano' in realta' e' Vincent! E adesso siete soli, chiusi nel suo ufficio!");
					getchar();
					printf("\nVai via con 25 HP in meno ed uno strano dolore al fondoschiena!");
					eroe->vita -= 25;
					break;
				default:
					break;
			}
		}
		fflush(stdin);
		system(clear);
		flagVincent = 0;
		currentPosition = 44;
        
        }
    }
    
void startFIght(Personaggio *nemico, Personaggio eroe){
    char a;
    printf("Inizia una lotta tra %s e %s!\n"
            "Premi 'k' per attaccare.\n"
            "Le tue stat sono: %d HP\n"
            "                  %d ATK\n\n\n", eroe.nome, nemico->nome, eroe.vita, eroe.atk);
    while(isAlive(*nemico) && isAlive(eroe)){
        a = _getch();
        fflush(stdin);
        
        if( a == 'k'){
           attack(eroe, nemico);
        }
    
    attack(*nemico, &eroe);
    }
    if(isDead(eroe)){
        
		printf("HAI PERSO miseramente\n");
		getchar();  //tipo system(pause)
        exit(0);
        }
    
    
    
    }