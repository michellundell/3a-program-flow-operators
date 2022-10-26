#include <stdio.h>
#include <stdbool.h>

/**
 * @brief blablabla
 * @author blablbala
 * @return int 
 */

//the program ask the user for a serie of number. User can then change the values, print and organize it.

int main()
{
	int x = 0;
	int numbers[5];
	float arrayS = sizeof(numbers) / sizeof(numbers[0]);
	char answer;
	bool stop = false;

	printf("write the numbers that you want to have\n"); //introduce the values of the numbers
	while (x < 5)
	{
		printf("number %d:\n", x);
		scanf("%d", &numbers[x]);
		x++;
	}

	do
	{

		printf("what do you want to do?\n1- Organice numbers \n2-Change a value \n3-Print a element \n4-Exit\n"); //choose a action
		scanf(" %c", &answer);

		switch (answer)
		{
		case '1':
			for (int i = 0; i < arrayS; i++)//organize fron the lowest to highst
			{
				for (int j = 0; j < arrayS; j++)
				{
					if (numbers[j] > numbers[i])
					{
						int temp = numbers[j];
						numbers[j] = numbers[i];

						numbers[i] = temp;
					}
				}
			}

			for (int i = 0; i < arrayS; i++) //print new order
			{
				printf("%d\n", numbers[i]);
			}

			break;

		case '2':
			int n, newN;	//change a vallue in a choosed element 
			printf("witch element do you want to change? (0/9\n");
			scanf("%d", &n);
			printf("The value is %d. Witch value do you want then?\n", numbers[n]);
			scanf("%d", &newN);

			numbers[n] = newN;

			break;

		case '3':		//print a element
			int ele;
			printf("witch element do you want to print?");
			scanf("%d", &ele);

			printf("the value of the element %d is: %d\n", ele, numbers[ele]);
			break;

		case '4':		//exit the program
			stop = true;
			break;

		default:	//default messeage

			printf("Wrong option. Try again");
			break;
		}

	} while (stop != true);

	return 0;
}
