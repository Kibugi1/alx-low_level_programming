#include<stdio.h>
/**
 * main - prints size of various types of the computer it is compiled and runnind
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int d;
	long int f;
	long long int g;
	float h;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("size of a long long int: %byte(s)\n", (unsigned long)sizeof(g));
printf("size of a float: %byte(s)\n", (unsigned long)sizeof(h));
return (0);
}
