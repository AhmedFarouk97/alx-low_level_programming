#include "main.h"

/**
 * _isuuper - check of letter is upper or lower 
 * @c: to be checked
 *
 * return  1 when c is uppercase and return 0 when c is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
