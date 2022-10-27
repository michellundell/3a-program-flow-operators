/**
 * @file 3a-using-all-stuff.c
 * @author Daniel Örhill (daniel.orhill@studerande.movant.se)
 * @brief Compatibility Checker
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

/**
 * @brief Main entry point of the program.
 * 
 * @param[in] argc 
 * @param[in] argv 
 * @return returns 0 on success.
 */
int main(int argc, char **argv)
{
	/**
	 * @brief Construct a new srand object
	 */
	srand(time(NULL));
	/**
	 * @brief Declare and initialize variables
	 */
	int compatibility = rand() % 100 + 1;
	char firstName[30];
	char secondName[30];
	bool soulmate;

	/**
	 * @brief Header and Instructions
	 */
	puts("Compatibility Checker");
	puts("--------------------------------------------------");
	puts("Please write two names to check the compatibility");
	puts("(Including last name will increase accuracy)");
	puts("--------------------------------------------------");
	/**
	 * @brief Asks the user for input
	 */
	printf("First Name: ");
	gets(firstName);
	printf("Second Name: ");
	gets(secondName);
	puts("--------------------------------------------------");

	/**
	 * @brief Check if they are soulmates
	 */
	switch (rand() % 5 + 1)
	{
	case 1:
		soulmate = true;
		break;
	default:
		soulmate = false;
		break;
	}
	/**
	 * @brief Adjust compatability depending on if the length of the name is the same
	 */
	if (strlen(firstName) != strlen(secondName))
	{
		while (compatibility >= 80)
		{
			for (int i = 0; i < rand() % 3; i++)
			{
				compatibility -= 10;
			}
		}
	}
	else if (strlen(firstName) == strlen(secondName))
	{
		do
		{
			for (int i = 0; i < rand() % 3; i++)
			{
				compatibility += 15;
			}
		} while (compatibility <= 60);
	}

	/**
	 * @brief Adjust compatability according to if they are soulmates or not
	 */
	if (!soulmate)
	{
		compatibility -= 20;
	}
	else
	{
		compatibility += 100;
	}

	/**
	 * @brief Results of the compatability checker
	 */
	printf("Your compatibility is: %d\n", compatibility);
	/**
	 * @brief If they are soulmates, tell the user they are soulmates
	 */
	if (soulmate)
	{
		puts("You guys are soulmates");
	}
	/**
	 * @brief Display message according to compatability
	 */
	if (compatibility <= 30)
	{
		puts("Best avoid eachother");
	}
	else if (compatibility > 30 && compatibility <= 60)
	{
		puts("Best stay as acquaintance");
	}
	else if (compatibility > 60 && compatibility <= 90)
	{
		puts("You guys will get along just fine");
	}
	else
	{
		puts("You just click, it's a thing");
	}

	return 0;
}
