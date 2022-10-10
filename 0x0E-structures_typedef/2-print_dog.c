#include "dog.h"

/**
 * print_dog - Fuction that prints the data in the input struct
 * @dog: The input struct
 * Return: Always void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner);
}
