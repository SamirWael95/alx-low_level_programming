#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The charactar to print
 *
 * return: on success 1.
 *  	 on error. -1 is returned ande errno is set apprpiately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
