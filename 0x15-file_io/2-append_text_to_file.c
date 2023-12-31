#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int var_o, var_w, var_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (var_len = 0; text_content[var_len];)
			var_len++;
	}

	var_o = open(filename, O_WRONLY | O_APPEND);
	var_w = write(var_o, text_content, var_len);

	if (var_o == -1 || var_w == -1)
		return (-1);

	close(var_o);

	return (1);
}
