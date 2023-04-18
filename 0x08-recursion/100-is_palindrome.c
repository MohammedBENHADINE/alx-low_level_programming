#include "main.h"
/**
 * checker - check string
 * @i: first index
 * @j: second index
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 **/
int checker(int i, int j, char *s)
{
	if (s[i] != s[j])
		return (0);
	if (i == j || j == i + 1)
		return (1);
	return (checker(i + 1, j - 1, s));
}
/**
 * get_length - get length
 * @s: string
 *
 * Return: length of string
 **/
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + get_length(s));
}
/**
 * is_palindrome - string checker
 * @s: string
 *
 * Return: 1 is string is palindrome, 0 otherwise
 **/
int is_palindrome(char *s)
{
	int n = get_length(s);

	return (checker(0, n - 1, s));
}
