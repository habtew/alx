#include <stdio.h>
#include "dog.h"


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil))";
		printf("Owner: %s", d->owner);
	}
}
