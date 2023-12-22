#include "main.h"

/**
 * own_exit - produces normal termination of the process
 * @args: empty args
 *
 * Return: 0 for termination
 */
int own_exit(char **args)
{
	if (args[1])
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		return (EXIT_SUCCESS);
	}
}
