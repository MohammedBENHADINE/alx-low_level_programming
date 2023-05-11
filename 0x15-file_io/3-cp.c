#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: arg number
 * @av: pointer on args chars
 *
 * Return: Always 0. or 97 98 100
 */
int main(int ac, char **av)
{
	int fp;
	int fq;
	ssize_t rcount, wcount;
	char buf[1024];
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp = open(av[2], O_WRONLY | O_TRUNC);
	if (fp < 0)
		fp = open(av[2], O_WRONLY | O_CREAT, 664);
	if (fp < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fq = open(av[1], O_RDONLY);
	if (fq < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	rcount = read(fq, buf, 1024);
	if (rcount < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	while (rcount > 0)
	{
		wcount = write(fp, buf, rcount);
		if (wcount != rcount || wcount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write
				       	to %s\n", av[2]);
			exit(99);
		}
		rcount = read(fq, buf, 1024);
	}
	res = close(fp);
	if (res  < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	res = close(fq);
	if (res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fq);
		exit(100);
	}
	return (0);
}
