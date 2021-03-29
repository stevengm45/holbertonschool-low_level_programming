#include "holberton.h"
/**
 * read_textfile - check the code for Holberton School students.
 * @filename: file to read and write
 * @letters: number of letters to read and write.
 * Return: letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t i;
int fn;
char *buf;
buf = malloc(sizeof(letters));
if (buf == NULL)
return (0);

fn = open(filename, O_RDONLY);

if (fn == -1)
{
return (0);
}

i = read(fn, buf, letters);

if (i == -1)
{
return (0);
}

i = write(STDOUT_FILENO, buf, i);

close(fn);
return (i);
}
