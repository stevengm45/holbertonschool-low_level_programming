#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename : filename
 * @text_content : text
 * Return: 1 on success and -1 failed
 */


int append_text_to_file(const char *filename, char *text_content)
{
int fn, i;

if (filename == NULL)
return (-1);

if (text_content)
for (i = 0; text_content[i]; i++)

fn = open(filename, O_WRONLY | O_APPEND);

if (fn == -1)
return (-1);

write(fn, text_content, i);

close(fn);

return (1);
}
