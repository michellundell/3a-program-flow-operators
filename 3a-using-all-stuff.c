/**
 * @file 3a-using-all-stuff.c
 * @author Hussein 
 * @brief A simple calculator that uses all the stuff.
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

/*
** This program will use if, for, while, do, switch statements. 
** It should also demonstrate the use of comparisons ==, !=, <=, >= 
** and how to use the ! 
*/

/**
 * @brief Function declaration
 */
double add (double a, double b);

double sub (double a, double b);

double mul (double a, double b);

double div (double a, double b);


int main(int argc, char **argv) 
{
	/**
	 * @brief Ask user for input and if input is true the program continues
	 */
	printf("Welcome to the calculatorprogram, if you want to continiue type 1 if not type 0 ");
	int answer;
	char omstart;
	scanf("%d", &answer);

	if (answer == 1) 
	{

	/**
	 * @brief This do-while will execute the code once then ask the user if it whants too execute the program again 
	 */
	do
	{
		char operator;
    	double number1;
    	double number2;
		double result;

    	printf("select operator +, -, *, / : ");
    	scanf(" %c", &operator);

    	printf("Enter two numbers: ");
    	scanf("%lf %lf", &number1, &number2);
		/**
		 * @brief Depending on the operator that the user selects the switch statment will call a function that calculates the numbers.
		 */
    	switch(operator)
    	{

    	case '+':
       		result = add (number1,number2);
    		break;
    	case '-':
     		result = sub (number1,number2);
     		break;
   		case '*':
     		result = mul (number1,number2);
     		break;
    	case '/':
    		result = div(number1,number2);
        	break;
    	default:
            printf(" Incorret operator ");
    	}
    	/**
    	 * @brief This for-loop has no real purpose then to show that i can implement a for-loop, it prints out the answer. 
    	 */
		for ( int i = 0; i < 1; i++)
		{
		printf("Answer is : %2.lf\n", result);
		}
		/**
		 * @brief This while-loop tells if the user has input a too large number 
		 */
		while (result > 1.7976931348623157E+308 )
		{
			printf("Your number is too large to fit in the varible\n");
			result = 2;
		}
		
		printf(" Do you want to run the program again? Y/N? ");
		scanf(" %c", &omstart);
		} while (omstart == 'Y');
		}

		else if ( answer != 1)
		{
			printf("shutting down program");
		}
	
    return 0;

}
/**
 * @brief The function returns the value of the two numbers.
 */

double add (double a, double b)

{
    return a + b;
}

double sub (double a, double b)
{
    return a - b;
}

double mul (double a, double b)
{
    return a * b;
}
double div (double a, double b)
{
    return a / b;
}



