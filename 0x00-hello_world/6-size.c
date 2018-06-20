#include <stdio.h>

/**
 * main - printing the size of various data types on computers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("Size of a char: " sizeof(char) " byte(s)");
puts("Size of an int: " sizeof(int) " byte(s)");
puts("Size of a long int: " sizeof(long int) " byte(s)");
puts("Size of a long long int: " sizeof(long long int) " bytes(s)");
puts("Size of a float: " sizeof(float) " byte(s)");
return (0);
}
