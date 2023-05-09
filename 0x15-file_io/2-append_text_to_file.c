#include "main.h"
/**
 * append_text_to_file - open and append to a file
 * @filename: file name
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wcount = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
