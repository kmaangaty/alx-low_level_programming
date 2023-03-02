#include "main.h"

/**
  * cap_string - function of type char,
  * that capitalizes all words of a string.
  * @s: source string to be modify.
  * Return: modified string.
  */
char *cap_string(char *s)
{
	int letter_index = 0;
	int letter_a = 13;
	int index = 0;
	char sp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[letter_index])
	{
		while (index < letter_a)
		{
			if (
				(letter_index == 0 || s[letter_index - 1] == sp[index])
				&& (s[letter_index] >= 97 && s[letter_index] <= 122))
				s[letter_index] -= 32;
			index++;
		}

		letter_index++;
	}

	return (s);
}
