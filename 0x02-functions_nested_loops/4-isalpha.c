#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if the character is within the range of lowercase letters */
	if (c >= 'a' && c <= 'z')
	return (1);

	/* Check if the character is within the range of uppercase letters */
	if (c >= 'A' && c <= 'Z')
	return (1);

	/* If neither of the above conditions were met, return 0 */
	return (0);
}
