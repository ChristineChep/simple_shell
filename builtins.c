#include "header.h"

/**
 * built_in - "function that converts strings to integers.
 * @s: String to compare.
 * Return: Always 0.
 */

int _atoi(char *s)

/**
 * built_in - function that prints to the screen.
 * @env: link to environ.
 *
 * main: "outputs
 * Return: Always 0.
 */

void _printenv(char **env)

/**
 * body - function that outputs.
 * @strtocmp: String to compare.
 * @env_link: link to environ.
 *
 * Return: Always 0.
 */
int built_in(char *strtocmp, char **env_link)
{
	int i = 0, temp = 0, status;
	char *esc = "exit", *e_var = "env";

	while (strtocmp[i] && esc[i])
	{
		if (strtocmp[i] != esc[i])
			temp = strtocmp[i] - esc[i];
		i++;
	}
	if (temp == 0)
	{
		status = _atoi(strtocmp + (i + 1));
		free(strtocmp);
		exit(status);
	}
	else
	{
		i = 0;
		temp = 0;
		while (strtocmp[i] && e_var[i])
		{
			if (strtocmp[i] != e_var[i])
				temp = strtocmp[i] - e_var[i];
			i++;
		}
		if (temp == 0)
		{
			_printenv(env_link);
			free(strtocmp);
			return (1);
		}
	}
	return (0);
}

/**
 * built_in - function that compares two strings and execute the built-in.
 * @strtocmp: String to compare.
 * @env_link: link to environ.
 *
 * Return: Always 0.
 */
int built_in(char *strtocmp, char **env_link)
{
	int i = 0, temp = 0, status;
	char *esc = "exit", *e_var = "env";

	while (strtocmp[i] && esc[i])
	{
		if (strtocmp[i] != esc[i])
			temp = strtocmp[i] - esc[i];
		i++;
	}
	if (temp == 0)
	{
		status = _atoi(strtocmp + (i + 1));
		free(strtocmp);
		exit(status);
	}
	else
	{
		i = 0;
		temp = 0;
		while (strtocmp[i] && e_var[i])
		{
			if (strtocmp[i] != e_var[i])
				temp = strtocmp[i] - e_var[i];
			i++;
		}
		if (temp == 0)
		{
			_printenv(env_link);
			free(strtocmp);
			return (1);
		}
	}
	return (0);
}
