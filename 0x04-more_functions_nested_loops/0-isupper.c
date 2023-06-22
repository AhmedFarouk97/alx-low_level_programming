#include "main.h"

/*
 * _isuuper - check of letter is upper or lower 
 * @c: to be checked
 *
 * Return  1 for uppercase and 0 for lowercase
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
