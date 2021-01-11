#include <stdio.h>

//Enum: Tipo de dato para guardar valores constantes 

/* enum weekDays{
    Sunday,
    Monday,
    Tuesday,
    Wednesday, 
    Thursday,
    Friday,
    Saturday
}; */

enum deck{
    club = 0, 
    diamonds = 5, 
    hearts = 10,
    spades = 15,
} card;

int main(){

/*  enum weekDays today;
    today = Sunday;
    printf("Day %d", today + 1); 
    return 0; */
    
    card = spades; 
    printf("Card value %d", card);
    printf("\nSize of variable %d", sizeof(card));
    return 0;

}