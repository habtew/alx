#include <stdio.h>
#include <stdlib.h>

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void __attribute__((constructor)) before_main()
{
	print_before_main();
}
