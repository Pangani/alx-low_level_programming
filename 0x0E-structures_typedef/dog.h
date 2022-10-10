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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
