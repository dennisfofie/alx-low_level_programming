#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function that reverses a string.
 * @s: value to be evaluate.
 */
void rev_string(char *s)
{
	int i, t;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
}
