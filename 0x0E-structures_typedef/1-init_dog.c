#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable
 * @d: Member
 * @name: Member
 * @age: Member
 * @owner: Member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (name);
	d->age = age;
	d->owner = (owner);
}
