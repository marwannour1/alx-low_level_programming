#include "main.h"

int check(char *s, int start, int end);
int _index(char *s);

/**
  * is_palindrome - c
  * @s: p
  * Return: 98
  */
int is_palindrome(char *s)
{
	int end = _index(s);

	return (check(s, 0, end));
}

/**
  * check - c
  * @s: s
  * @start: p
  * @end: y
  * Return: 98
  */
int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1));
}

/**
  * _index - c
  * @s: p
  * Return: 98
  */
int _index(char *s)
{
	if (*s == '\0')
		return (0);
	return (_index(s + 1) + 1);
}
