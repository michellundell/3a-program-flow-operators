/**
 * @file 3a-using-all-stuff.c
 * @author Joakim Englund (joakimenglund@protonmail.com)
 * @brief This program will use if, for, while, do, switch statements. 
 * It should also demonstrate the use of comparisons ==, !=, <=, >= 
 * and how to use the ! 
 * @version 1.0
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief This is the main function, where all the magic happens.
 * 
 * @param argc Number of command line arguments.
 * @param argv An array of the command line arguments as strings.
 * @return returns 0 on successful run.
 */
int main(int argc, char **argv) 
{
	int x = 2, y = 7;

	if (!x)
	{
		printf("This will not print!\n");
	}
	else if (x != 42)
	{
		printf("x (%d) != 42\n", x);
	}
	else{
		printf("This will not happen either!\n");
	}
	printf("\n");

	/**
	 * @brief There's a very complex for loop here, doing very important things!
	 * 
	 */
	printf("for-loop (i = 0; i < 10; i += 2)):\n");
	for (int i = 0; i < 10; i += 2)
	{
		if (x == i)
		{
			printf("\t%d == %d\n", x, i);
		}
		else if (x != i)
		{
			printf("\t%d != %d\n", x, i);
		}
	}
	printf("\n");

	printf("while (y >= x), y--:\n");
	while (y >= x)
	{
		printf("\tx: %d, y: %d\n", x, y--);
	}
	printf("\n");
	y = 7;

	// do-while with a switch-case statement inside.
	printf("do {  } while (x <= 10):\n");
	do
	{
		printf("\tx: %d\n", x);
		printf("\tswitch (x)\n");
		switch (x++)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				// Anything between 0 and 4 will print this.
				printf("\t\t0 <= x <= 4\n");
				break;
			case 5:
				printf("\t\tx = 5\n");
				break;
			case 6:
				printf("\t\tx = 6\n");
				break;
			case 7:
			case 8:
				// This will print for both 7 and 8.
				printf("\t\tx = 7 or 8\n");
			case 9:
			case 10:
				// Anything between 7 and 10 will print this.
				printf("\t\t7 <= x <= 10\n");
				break;
			case 11:
				printf("\t\tx = 11. This will not print.\n");
				break;
			default:
				printf("\t\tThis will not print!\n");
				break;
			printf("\n");
		}
		printf("\n");
	} while (x <= 10);
	printf("\n");

	return 0;
}
