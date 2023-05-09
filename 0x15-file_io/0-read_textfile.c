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
	ssize_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	count = read(fp, buf, letters);
	if (count < 0)
	{
		close(fp);
		return (0);
	}
	printf("%s\n", buf);
	close(fp);
	return (count);
}
