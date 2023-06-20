#include "main.h"	
	/**
	 * print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{

	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for ( i = 0, i <= 26 , i++)
	  	_putchar(c[i]);

	_putchar('\n');
	}
