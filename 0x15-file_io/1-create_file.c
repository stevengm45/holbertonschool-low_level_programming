#include "holberton.h"
/**
 * create_file -function that creates a file.
 * @filename : filename
 * @text_content : text
 * Return: 1 on success, -1 failed
 */

int create_file(const char *filename, char *text_content)
{
int fn, i;

if (filename == NULL)
return (-1);

if (text_content)
for (i = 0; text_content[i]; i++)

fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fn == -1)
return (-1);

write(fn, text_content, i);
return (1);
}
