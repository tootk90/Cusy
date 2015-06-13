#include <stdio.h>
#include "..\headers\type.h"
#include "..\headers\mappa.h"

int currentPosition;
int thereIsEnemy;

Room stanze[14] = {
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
    {"FINE", 0}                //13
    };

int mappa[14][4] = {
   // n  s  e  w     
    {-1,-1, 1,-1},  //0
    {-1,-1, 2, 0},  //1
    {-1, 3,-1, 1},  //2
    { 2, 4,-1,-1},  //3
    { 3, 5,-1,-1},  //4
    { 4,-1, 6,-1},  //5
    {-1,-1, 7, 5},  //6
    {-1,-1, 8, 6},  //7
    { 9,-1,-1, 7},  //8
    {10, 8,-1,-1},  //9
    {-1, 9,11,-1},  //10
    {-1,-1,12,10},  //11
    {-1,-1,13,11},  //12
    {-1,-1,-1,12}   //13
    };
    
void move(int dir){
    int newPosition;
    newPosition = mappa[currentPosition][dir];
    if (newPosition == -1){
        printf("davanti a te c'e' un muro\n");
        }else{
            currentPosition = newPosition;
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

