#include "main.h"
/**
 * read_textfile - reads and prints a file
 * @filename: file pointer
 * @letters: how much letters
 *
 * Description: function that reads a text file and
 * prints it to the POSIX standard output.
 * Return: letters read or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t wcount, rcount = 0;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rcount = read(fp, buf, letters);
	if (rcount < 0)
	{
		free(buf);
		close(fp);
		return (0);
	}
	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount <= 0)
	{
		close(fp);
		free(buf);
	}
	close(fp);
	free(buf);
	return (wcount);
}
