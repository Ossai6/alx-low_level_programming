#ifndef DOG
#define DOG

/**
 * struct dog - Structure
 * @name: name
 * @age: age
 * @owner: owner
 * Description: A structure that stores the details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
