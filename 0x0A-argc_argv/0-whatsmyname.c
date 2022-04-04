#include <stdio.h>
#define UNUSED(x) (void)(x)

/** Print program name, followed by a new line
 * without having to comfile the file
 * argc(argument count) = counts number of arguments.
 * argv(argument vector) = print the indexes of strings in a 1D-array.
 *
 * return 0;
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
