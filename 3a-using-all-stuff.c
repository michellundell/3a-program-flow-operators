#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief test
 * @author Julie Anne
 * @copyright Julie Anne 2022
 *
 */

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
*/


int main(int argc, char **argv) 
{

	printf("Testing switch statement:\n");
    int dayNum = 3; // enter any number of the week

	// pass int argument into switch statement
    switch(dayNum)
    {
        case 0:
            printf("Day 0: Sunday\n");
            break;
        case 1:
            printf("Day 1: Monday\n");
            break;
        case 2:
            printf("Day 2: Tuesday\n");
            break;
        case 3:
            printf("Day 3: Wednesday\n");
            break;
        case 4:
            printf("Day 4: Thursday\n");
            break;
        case 5:
            printf("Day 5: Friday\n");
            break;
        case 6:
            printf("Day 6: Saturday\n");
            break;
		default: // this executes if none of the arguments match the output
		    printf("Invalid Day Number\n");
			break;
    }

	printf("\nTesting if and else statement and logical operators:\n");
	char grade = 'A';

	if(grade == 'a' || grade == 'A')
	{
		printf("You are a grade A student!\n");
	}
	else
	{
		printf("Incorrect format!\n");
	}

	printf("\nTesting comparison operators:\n");
	// Comparison operators
	int a = 15, b = 15;
	if(a != b)
	{
		printf("a & b are not equal.\n");
	}
	else
	{
		printf("a & b are equal.\n");
	}

	int j = 15, l = 12;
	if(j >= l)
	{
		printf("j is bigger than or equals to l.\n");
	}
	else if(j <= l)
	{
		printf("j is less than or equals to j.\n");
	}

	printf("\nTesting BITWISE Operators:\n");
	// d = 00000100 
	// e = 00000110
	int d = 4, e = 6;

	// & AND Operator
	printf("d = %d, e = %d\n", d, e);
	// result = 00000100
	printf("d&e = %d\n", d&e);

	// | OR Operator
	// result = 00000110
	printf("d|e = %d\n", d|e);

	// ^ XOR Operator
	// result = 00000010
	printf("d^e = %d\n", d^e);

	// ~ NOT Operator
	// result = 11111011
	printf("~d = %d\n", ~d);

	// result = 00001000
	printf("d<<1 = %d\n", d<<1);

	// result = 00000010
	printf("d>>1 = %d\n", d>>1);

	// Right & Left Shift Operators
	printf("\n");

	const int x = 128;
	for(int i = 0; i < 8; i++)
	{
		printf("Right shift by %d : %d decimals\n", i, x>>i);
	}
	printf("\n");

	int n = 1;
	for(int i = 0; i < 8; i++)
	{
		printf("Left shift by %d : %d decimals\n", i, n<<i);
	}
	
	// while loop
	char *phrase = malloc(sizeof(char) * 30);
	phrase = "I love Programming!";
	int q = 0;
	while(phrase[q] != '\0')
	{
		q++;
		printf("%s\n", phrase);
	}

	// do while loop
	int r = 5, t = 1;
	printf("Multiplication table of %d:\n", r);
	do
	{
		printf("%d * %d = %d\n", r, t, r * t);
		t++;
	} while (t <= 10);
	
	return 0;
}

