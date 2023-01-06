#include <stdio.h>
/**
 * main - write a program that prints the num of arguments passed into it
 * @args: the argument count
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
