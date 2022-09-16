#include "main.h"
/**
 * _isupper - check description
 * @cLetter: input character
 * Description: the function checks for upper case character
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int cLetter)
{
	char j;
	int rValue = 0;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (cLetter == j)
		{
			rValue = 1;
			break;
		}
	}
	return (rValue);
}
