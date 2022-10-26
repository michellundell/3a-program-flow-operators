#include <stdio.h>

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
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
				printf("\t\tx = 7 or 8\n");
			case 9:
			case 10:
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
