#include "main.h"
/**
 * _isupper - check description
 * @cLetter: input character
 * Description: the function checks for upper case character
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int cLetter)
{
	char i, j;
	int rValue;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (cLetter == j)
			{
				rValue = 1;
				break;
			}
			else if (cLetter == i)
			{
				rValue = 0;
				break;
			}
			else
			{
				break;
			}
		}
	}
	return (rValue);
}
