#include "main.h"

/**
  * cap_string - function of type char,
  * that capitalizes all words of a string.
  * @s: source string to be modify.
  * Return: modified string.
  */
char *cap_string(char *s)
{
	int la = 0;
	int letter_a = 13;
	int index = 0;
	char sp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[la])
	{
		index = 0;
		while (index < letter_a)
		{
			if ((la == 0 || s[la - 1] == sp[index]) && (s[la] >= 97 && s[la] <= 122))
				s[la] -= 32;
			index++;
		}

		la++;
	}

	return (s);
}
