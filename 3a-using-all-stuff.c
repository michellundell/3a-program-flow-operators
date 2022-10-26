#include <stdio.h>

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
*/

// Ett program som testar allt ovan, ganska meningslöst men kul program 
int main(int argc, char **argv)
{
    char again = 'y';

    do
    {
        for (int i = 0; i < 5; i++)
        {
            switch (i)
            {
            case 0:
                printf("-Hello!");
                break;
            case 1:
                printf("how ");
                break;
            case 2:
                printf("are ");
                break;
            case 3:
                printf("you ");
                break;
            default:
                printf("? ");
            }
		
            for (int j = 0; j <= 5 || ( !1 ); j++)
            {
                if (j >= i)
                {
                    printf("\n");
                }
				if ( ! j==1 )
				{
					printf(":)");
				}
				else
				{
					printf("-");
				}
            }
        }
        printf("Would you like to go again? (y/n)");
        scanf(" %c", &again);
    } while (again != 'n');
    return 0;
}