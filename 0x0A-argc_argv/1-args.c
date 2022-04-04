#include <stdio.h>

/** Print program name, followed by a new line
 * without having to comfile the file
 * argc(argument count) = counts number of arguments.
 * argv(argument vector) = print the indexes of strings in a 1D-array.
 *
 * return 0;
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}	
