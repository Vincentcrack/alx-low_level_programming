#include "dog.h"

#define NULL (void *)0

/**
 * int_dog - initialize a variable of type struct
 * @d: a pointer to struct dog
 * @name: the name of the dog
 * @owner: of the dog
 * @age: the dog age
 *
 * Return: 0
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
