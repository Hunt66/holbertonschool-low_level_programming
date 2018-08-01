#include <stdio.h>
#include <stdlib.h>


void print_before_main(void) __attribute__((constructor));
/**
 *print_before_main- prints message before main
 *Return: void
 */

void print_before_main(void)
{

	printf("You're beat! and yet, you must allow,\nI bore my house upon my b
ack!\n");

}
