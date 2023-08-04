#include "main.h"

int check(char *s, int start, int end);
int index(char *s);

/**
  * is_palindrome - c
  * @s: p
  * Return: 98
  */
int is_palindrome(char *s)
{
	int end = index(s);

	return (check(s, 0, end));
}

/**
  * div - c
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
  * index - c
  * @s: p
  * Return: 98
  */
int index(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	return (index(s + 1) + 1);
