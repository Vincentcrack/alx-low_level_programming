#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic structure
 * @name: name of the dog
 * @age: the dog age
 * @owner: the dog owner
 * Description: user defined data type for a dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
