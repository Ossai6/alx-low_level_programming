#ifndef DOG
#define DOG

/**
 * dot_t - typedef for struct dog
 */
typedef struct dog dog_t;

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
