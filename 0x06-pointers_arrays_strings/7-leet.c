#include <stdio.h>

/**
 * let - transform to leet
 * @s: char array string type
 * REturn: s tranformed
 */
char *leet(char *s)
{
	int i, ii;
	char s1[] = "aeotl";
	char s1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; i++)
		{
			if (s[i] == s1[ii] || s[i] == s1[ii])
			{
				s[i] = s2[ii];
				break;
			}
		}
	}

	return(s);
}
