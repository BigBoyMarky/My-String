#include <sys/types.h>

/*
 * Implement the following string procedures.
 *
 * Type "man strstr" to find what each of the functions should do.
 *
 * For example, mystrcpy should do the same as strcpy.
 *
 * IMPORTANT: DO NOT use predefined string functions.
 */

char *mystrcpy(char * s1, const char * s2)
{
  /* Complete procedure */

	char *toReturn = s1;

	while (*s2) {

		*s1++ = *s2++;

	}

	*s1 = 0;

	return toReturn;

}

size_t mystrlen(const char *s)
{
  /* Complete procedure */

	char *temp = s;

	while (*temp != '\0') {

		temp++;

	}

	return (temp - s);

}

char *mystrdup(const char *s1)
{
  /* Complete procedure */

	char *temp = malloc(strlen(s1) + 1);

	mystrcpy(temp, s1);

	return temp;

}

char *mystrcat(char * s1, const char * s2)
{
  /* Complete procedure */

	char *temp = s1;

	while (*s1) {

		s1++;

	}

	while (*s1++ = *s2++);

	return temp;

}

char *mystrstr(char * s1, const char * s2)
{
  /* Complete procedure */

	for (; *s1; s1++) {

		char *a;
		char *b;

		for (a = s1, b = s2; *a && (*a == *b); ++a, ++b) {

		}

		if (*b == '\0') {

			return s1;

		}

	}

}

int mystrcmp(const char *s1, const char *s2) {
  /* Complete procedure */

	char *temp1 = s1;
	char *temp2 = s2;

	int i = 0;

	while ((*temp1 != '\0') || (*temp2 != '\0')) {

		if (*temp1 > *temp2) {

			return 1;

		}

		if (*temp1 < *temp2) {

			return -1;

		}

		temp1++;
		temp2++;

	}

	return 0;

}

