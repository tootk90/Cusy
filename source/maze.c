#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type.h"
#include "mappa.h"

//#define DIM  50 // dimensione lato mappa (consigliato 50)



 

	
	void resetMaze(Room stanze[DIM][DIM]){ //reset mappa
	int i,j;
	
	for (i=0; i<DIM;i++){
		for(j=0; j<DIM; j++){
			stanze[i][j].visited = 0;		//resetta tutti i muri e le zone gia generate
			stanze[i][j].walkable = 0;
			}
			
		}
	
	}
	


void closeMaze1(Room stanze[DIM][DIM]){		//crea i muri del contorno
	int i;
	for (i = 0; i <= DIM; i++){
		stanze[i][0].walkable = 2;	//asegna il valore 2 per distinguerlo dal valore dei muri interni
		}
	for (i = 0; i <= DIM; i++){
		stanze[0][i].walkable = 2;	
		}
	for (i = 0; i <= DIM; i++){
		stanze[DIM-1][i].walkable = 2;
		}
	for (i = 0; i <= DIM; i++){
		stanze[i][DIM-1].walkable = 2;
		}
}
		
void PrintMazes(Room stanze[DIM][DIM]){		//stampa la mastrice a schermo
	int i, h;
	for (i = 0; i < DIM; i++){
		for (h = 0; h < DIM; h++){
			if(stanze[i][h].visited == 0){	//stampa 0 per muri e 1 per le stanze
				printf("0");
				}else{
					printf("1");
					}
			}
	printf("\n");
	}
}





void generateMazeAlg(Room stanze[DIM][DIM]){

	int x = 1;			//setto coordinate di partenza
	int y = 1;	
//	int oldx = -1, oldy = -1;	//variabili che mi registrano la posizione precedente
	srand(time(NULL));	//seed di rand
	
	while(1){	//ciclo che si interrompe quando la mappa è stata generata
		//usleep(60000);		//funzione provvisoria per rallentare l'output terminale
				
		int dir = -1;			//imposto direzione da percorrere con un  valore negativo
		
		int ufree = 1, dfree=1, lfree=1, rfree=1;	//variabili che mi dicono se le celle adiacenti solo libere
														// 1== non libere
		int done = 1;	//flag che interrompe il prossimo ciclo while
		
		stanze[y][x].visited = 1;		//imposto la cella attuale come generata e visitata
		
		if(stanze[y-2][x].walkable == 0 && stanze[y-1][x].visited == 0){		//controlli che guardano le celle adiacenti
			ufree = 0;															//se sono percorribili e non visitati da 0
			}
		if(stanze[y+2][x].walkable == 0 && stanze[y+1][x].visited == 0){
			dfree = 0;
			}
		if(stanze[y][x+2].walkable == 0 && stanze[y][x+1].visited == 0){
			rfree = 0;
			}	
		if(stanze[y][x-2].walkable == 0 && stanze[y][x-1].visited == 0){
			lfree = 0;
			}
	
		while(done == 1){		//questo ciclo decide casualemente quale direzione prendere tra quelle percorribili
			dir = rand() % 5;
			switch (dir){
				case 0:
					if(ufree == 0){
					//	oldy = y;
						y--;
						//stanze[oldy][x+1].walkable = 1;	//tentativo fallito di creare dei muri
						done = 0;
						break;
						}
				case 1:
					if(dfree == 0){
					//	oldy = y;
						y++;
						//stanze[oldy][x+1].walkable = 1;
						done = 0;
						break;
						}
				case 2:
					if(lfree == 0){
						//oldx = x;
						x--;
						//stanze[y-1][oldx].walkable = 1;
						done = 0;
						break;
						}
				case 3:
					if(rfree == 0){
					//	oldx = x;
						x++;
						//stanze[y+1][oldx].walkable = 1;
						done = 0;
						break;
						}
				default:		//se il numero generato non corrisponde a nessuna direzione rifa l'operazione da capo
				done = 0;
				break;
				}
			}
		if(ufree == 1 && dfree==1 && lfree==1 && rfree==1){	//nel caso in cui si ritrova in un loop
		//	system("cls");	//pulisce lo schermo
		//	PrintMazes(stanze);	//stampa la mappa attuale
			if(stanze[y+1][x+1].walkable == 0){			//controlla se ha davanti un muro
			x++;										//e si sposta in diagonale 
			y++;
			}else{
					
					y--;		//in tal caso di sposta verso il basso
			}
		}
		if(y == DIM-1 || x == DIM-1){			//se raggiunge uno dei bordi smette di generare la mappa
			break;
			}
			
			//break;
	}
	
	}

void stabilizeMap(Room stanze[DIM][DIM]){
	int i, h;
	for (i = 0; i < DIM; i++){
		for (h = 0; h < DIM; h++){
			if(stanze[i][h].visited == 1){
				stanze[i][h].walkable = 1;
				}else{
					stanze[i][h].walkable = 0;
					}
			}
		}
}

//-----------------------------------------------------------

/*
 * 
int main(int argc, char **argv)
{
	srand(time(NULL));
	
	
	Room maze1[DIM][DIM];
	PrintMazes(maze1);
	while(1){
	resetMazes(maze1);
	closeMaze1(maze1);
	system("cls");
	PrintMazes(maze1);
	printf("\n\n");
	
	generateMaze(maze1);
	system("cls");
	PrintMazes(maze1);
	printf("\nmagia!\n");
	getchar();
	}
	return 0;
}

*/
