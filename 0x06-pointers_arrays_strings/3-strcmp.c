#include "main.h"

/**
  * _strcmp - a function that compares two strings.
  * @s1: The first string.
  * @s2: The second string.
  * Return: result
  */
int _strcmp(char *s1, char *s2)
{
	int first_string_length = 0;
	int second_string_length = 0;
	int length_difference = 0;
	int string_length = 0;
	int result = 0;

	while (s1[first_string_length])

		first_string_length++;


	while (s2[second_string_length])
		second_string_length++;


	if (first_string_length <= second_string_length)
	{
		string_length = first_string_length;
	}
		else
	{
		string_length = second_string_length;
	}

	while (length_difference <= string_length)
	{
		if (s1[length_difference] == s2[length_difference])
		{
			length_difference++;
			continue;
		}
		else
		{
			result = s1[length_difference] - s2[length_difference];
			break;
		}

	}

	return (result);
}
