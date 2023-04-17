#ifndef NEW_DOG
#define NEW_DOG

/**
 * struct dog - a new type describing a dog
 * @name: Name of the dog
 * @age: How old the dog is
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
