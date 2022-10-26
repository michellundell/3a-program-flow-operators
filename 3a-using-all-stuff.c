#include <stdio.h>

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
*/


// A struct for parkinglot with price per hour
struct phus {
    int time;
    int platser;
    float pris;
    };


int main(int argc, char **argv) 
{
    struct phus PHUS;
    PHUS.platser = 67;
    PHUS.pris = 10.95;
    PHUS.time = 5;
    int antal = 0;
    float totalPris;
    
    printf("How many cars do you want to park:?");
    scanf("%d",&antal);
    totalPris = PHUS.platser * antal;
    if (antal > PHUS.platser )
    {
         printf ("No place for your car");
    }
    else if (antal < PHUS.platser)
    {
         printf ("You can park your car here\n");
    }

    for(int i = 0; i < PHUS.time; i++)
    {
        totalPris += PHUS.pris;
    }

    printf("\nAnd the total price is\n%.2f", totalPris);
   
	return 0;
}
