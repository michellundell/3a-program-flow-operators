/**
 * @file test.c
 * @author Mohamud Abdi(mohamud.abdi@studerande.movant.se)
 * @brief  compares two numbers if they are the same printed true otherwise false
 * @version 0.1
 * @date 2022-10-26
 * 
 */
#include <stdio.h>

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
*/


/**
 * @brief 
 * 
 */

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv) 
{
 int x,y;

    for(int b=0;b<argc; b++) {
        printf("argv[%d] = %s\n",b,argv[b]);
    }
// compares two numbers if they are the same printed true otherwise false


printf ( "write your first number");
  scanf("%d",&x );
 printf ( "write your second number");
  scanf("%d",&y);
 
 int sum = x+y;
 
 
  if(x==y ) {
 printf("%d == %d is true\n",x,y);
  }  else if(x!=y) {
 printf("%d ==%d is false \n" ,x,y);
}

for(int x=y; y<x; y--) {
 
}
 printf("\n");
 
 
 
 



return 0;
} 
