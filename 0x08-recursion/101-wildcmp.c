#include <stdio.h>

/**
 * wildcmp - compares two strings with * wildcard
 * @s1: the first string
 * @s2: the second string with * wildcard
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match, move to the next ones */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If s2 contains a '*', try to match the rest of the strings */
	if (*s2 == '*')
	{
		/* If s2 is only '*', it matches any s1 string */
		if (*(s2 + 1) == '\0')
			return (1);

		/* Otherwise, try to match the rest of s1 with s2 after '*' */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		/* Try to match s1 with the rest of s2 after '*' */
		return (wildcmp(s1, s2 + 1));
	}

	/* If none of the above conditions are met, the strings do not match */
	return (0);
}

