#include "main.h"
#include <stdlib.h>

/**
 * read-textfile - reads text and prints to POSIX std output
 * @filename: source of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fh, done;
char *storage = malloc(sizeof(char *) * letters);

if (!storage)
return (0);

if (!filename)
return (0);

fh = open(filename, O_RDONLY, 0600);
if (fh == -1)
return (0);

done = read(fh, storage, letters);
write(STDOUT_FILENO, storage, done);

free(storage);
close(fh);
return (done);
}
