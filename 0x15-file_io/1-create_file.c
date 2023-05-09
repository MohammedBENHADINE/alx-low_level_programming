#include "main.h"
/**
 * create_file - create and write to a file
 * @filename: file name
 * @text_content: content
 * Return: l1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wcount = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_TRUNC);
	if (fp < 0)
		fp = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fp < 0)
		return (-1);
	if (text_content != NULL)
	{
		wcount = write(fp, text_content, strlen(text_content));
		if (wcount <= 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
