#include <stdio.h>

/** 
 * main - Print all arguments received.
 * @argc: (argument count) = counts number of arguments.
 * @argv: (argument vector) = print the indexes of strings in a 1D-array.
 * return: 0 - success.
 */

int main(int argc, char *argv[]){

    int i = 0;

    while(i < argc)
    {
    	printf("%s\n" , argv[i]);
	i++;
    }
	return (0);
}
