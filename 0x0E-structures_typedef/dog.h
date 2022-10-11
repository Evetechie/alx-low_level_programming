#ifndef DOG_H_FILE
#define DOG_H_FILE
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: THis struct is for dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float *age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float *age, char *owner);
void free_dog(dog_t *d);

#endif
