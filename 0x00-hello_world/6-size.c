#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{

	/* sizeof evaluates the size of a variable */
	printf("Size of a char:" ,sizeof(char)," byte(s)\n");
	printf("Size of an int:" ,sizeof(int),"byte(s)\n");
	printf("Size of an double:",sizeof(double)," byte(s)\n");
	printf("Size of a long int:",sizeof(long int),"byte(s)\n");
	printf("Size of a long long int:",sizeof(long long int),"byte(s)\n");
	printf("Size of a float:",sizeof(float),"byte(s)\n");

	return (0);

}
