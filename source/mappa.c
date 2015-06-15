#include <stdio.h>
#include "type.h"
#include "mappa.h"

int currentPosition;
int thereIsEnemy;
int flagFazio = 1;



Room stanze[45] = {
    {"Inizio", 0},             //0
    {"Corridoio Nord", 0},     //1
    {"Corridoio Nord", 0},     //2 
    {"Corridoio", 0},          //3
    {"Corridoio", 0},          //4
    {"Ala Sud", 0},            //5
    {"Corridoio Sud", 0},      //6
    {"Corridoio Sud", 1},      //7
    {"Angolo Sud", 0},         //8
    {"Corridoio Est", 0},      //9
    {"Corridoio Est", 0},      //10
    {"Ala Est", 0},            //11
    {"Ala Est", 0},            //12
    {"FINE", 0},               //13
    {"Sotterraneo sud", 0},    //14
    {"Sotterraneo sud", 0},    //15
    {"Corridoio sott.", 0},    //16
    {"Corridoio sott.", 0},    //17
    {"Corridoio sott.", 0},    //18
    {"Scala", 0},              //19
    {"Scala", 0},              //20
    {"Pianerottolo", 0},       //21
    {"Dipart. di fisica", 0},  //22
    {"Dipart. di fisica", 0},  //23
    {"Uffici Dipart.", 2},     //24
    {"Scala", 0},              //25
    {"Scala", 0},              //26
    {"Scala", 0},              //27
    {"Scala", 0},              //28
    {"Scala", 0},              //29
    {"Porta con 12 dita", 0},  //30
    {"Corridoio", 0},          //31
    {"Corridoio", 0},          //32
    {"Gen. nucleare", 0},      //33
    {"Decontaminazione", 0},   //34
    {"Sala Controllo", 0},     //35
    {"Nocciolo", 0},           //36
    {"Compartimento 1", 0},    //37
    {"Compartimento 2", 0},    //38
    {"Compartimento 3", 0},    //39
    {"Ingresso Dip.", 0},      //40
    {"Campo Complesso", 0},    //41
    {"Iperbole Impropria", 0}, //42
    {"Rette Parallele", 0},    //43
    {"Uff. Prof. Vince'", 0}   //44
    
    };

int mappa[45][4] = {
   // n  s  e  w     
    {-1,26, 1,-1},  //0
    {-1,-1, 2, 0},  //1
    {-1, 3,-1, 1},  //2
    { 2, 4,-1,-1},  //3
    { 3, 5,-1,-1},  //4
    { 4,14, 6,-1},  //5
    {-1,-1, 7, 5},  //6
    {-1,-1, 8, 6},  //7
    { 9,-1,40, 7},  //8
    {10, 8,-1,-1},  //9
    {-1, 9,11,-1},  //10
    {27,-1,12,10},  //11
    {-1,-1,13,11},  //12
    {-1,-1,-1,12},  //13
    { 5,15,-1,-1},  //14    
    {14,-1,-1,16},  //15
    {-1,-1,15,17},  //16
    {-1,-1,16,18},  //17    
    {19,-1,17,-1},  //18
    {20,18,-1,-1},  //19
    {21,19,-1,-1},  //20    
    {-1,20,22,-1},  //21
    {-1,-1,23,21},  //22
    {24,-1,-1,22},  //23
    {25,23,-1,-1},  //24
    {-1,24,-1,26},  //25
    { 0,-1,25,-1},  //26
    {28,11,-1,-1},  //27
    {-1,27,29,-1},  //28
    {-1,-1,30,28},  //29
    {31,-1,-1,29},  //30
    {32,30,-1,-1},  //31
    {-1,31,33,-1},  //32
    {-1,-1,34,32},  //33
    {-1,-1,35,33},  //34
    {-1,-1,36,34},  //35
    {37,39,38,35},  //36
    {-1,36,-1,-1},  //37
    {-1,-1,-1,36},  //38
    {36,-1,-1,-1},  //39
    {-1,-1,41, 8},  //40
    {43,42,40,-1},  //41
    {41,-1,-1,-1},  //42
    {44,41,-1,-1},  //43
    {-1,43,-1,-1}   //44
    };
    
void move(int dir){
    int newPosition;
    newPosition = mappa[currentPosition][dir];
    if (newPosition == -1){
        printf("davanti a te c'e' un muro\n");
        }else{
            currentPosition = newPosition;
            showRoom();
            }
    
    }

void up(void){
    move(0);
    }
    
void down(void){
    move(1);
    }

void left(void){
    move(3);
    }

void right(void){
    move(2);
    }
    
void describe(Room room){
    printf("ti trovi in %s\n",  room.name);
    }

void checkEnemy(Room room){
    thereIsEnemy = room.enemy;
    }
    
void showRoom(){
    describe(stanze[currentPosition]);
    checkEnemy(stanze[currentPosition]);
    
    
    }


/*-----stanze-----*/

