#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * struct dog
 * @d: pointer that poinrs to the structure dog
 * @name: Name
 * @age: Age
 * @owner: owner
 *
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
