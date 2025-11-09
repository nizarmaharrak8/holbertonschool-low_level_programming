#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: structure that stores information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
