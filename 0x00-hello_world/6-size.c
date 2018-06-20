#include <stdio.h>

/**
 * main - printing the size of various data types on computers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d", sizeof(char));
printf( " byte(s)\n");
printf("Size of an int: %d", sizeof(int));
printf( " byte(s)\n");
printf("Size of a long int: %d", sizeof(long int));
printf( " byte(s)\n");
printf("Size of a long long int: %d", sizeof(long long int));
printf( " bytes(s)\n");
printf("Size of a float: %d", sizeof(float));
printf( " byte(s)\n");
return (0);
}
