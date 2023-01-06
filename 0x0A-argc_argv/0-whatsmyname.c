#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line
 * if the program is renamed, it will print the new name, without having to
 * compile it again
 * the path before the name of the program will not be removed
 *
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
