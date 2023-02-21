#include"main.h"


/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

	for (ch = 0; ch < 8; ch=ch+1 )
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
