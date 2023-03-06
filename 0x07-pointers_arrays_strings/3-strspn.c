#include "main.h"

/**
 * _strspn -function of type unsigned int that,
 * gets the length of a prefix substring.
 * @s: pointer of tested string.
 * @accept: approved value.
 * Return: the number of bytes in the initial segment,
 * of @s which consist only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sIndex;
	unsigned int subXIndex = 0;
	unsigned int checkerValue;
	unsigned int acceptIndex;


	for (sIndex = 0; s[sIndex] != '\0'; sIndex++)
	{
		checkerValue = 0;

		for (acceptIndex = 0; accept[acceptIndex] != '\0'; acceptIndex++)
		{
			if (accept[acceptIndex] == s[sIndex])
			{
				subXIndex++;
				checkerValue = 1;
			}
		}

		if (checkerValue == 0)
			return (subXIndex);
	}

	return (subXIndex);
}
