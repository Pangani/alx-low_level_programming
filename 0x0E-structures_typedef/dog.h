#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - function for dog object
 * @name: name
 * @owner: owner
 * @age: age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
/**
 * struct dot_t - another type
 * @name: name
 * @owner: owner
 * @age: age
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
