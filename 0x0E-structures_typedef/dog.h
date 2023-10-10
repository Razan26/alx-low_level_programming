#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initalizes a variable
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif

