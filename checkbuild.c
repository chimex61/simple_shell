#include "shell.h"

/**
* checkbuild - checks if the command is a buildin
* @arv: array of arguments
* Return: pointer to function that takes arv and returns void
*/
void(*checkbuild(char **arv))(char **arv)
{
	int a, b;
	mybuild T[] = {
		{"exit", exitt},
		{"env", env},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{NULL, NULL}
	};

	for (a = 0; T[a].name; a++)
	{
		b = 0;
		if (T[a].name[b] == arv[0][b])
		{
			for (a = 0; arv[0][b]; b++)
			{
				if (T[a].name[b] != arv[0][b])
					break;
			}
			if (!arv[0][b])
				return (T[a].func);
		}
	}
	return (0);
}
