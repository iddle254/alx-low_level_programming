#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 *
 * @name: name of doggo
 * @age: age of doggo
 * @owner: doggo owner
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog_t;

/**Prototype declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
