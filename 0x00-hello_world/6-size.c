#include<stdio.h>
/**
 * main - prints size of various types
 * Return: 0 (Success)
 */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of a long int: %lu byte(s)\n", sizeof(long int));
printf("size of a long long int: %byte(s)\n", sizeof(long long int));
printf("size of a float: %byte(s)\n", sizeof(float));
return (0);
}
