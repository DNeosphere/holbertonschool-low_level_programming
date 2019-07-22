#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - info about cute doggies
 * @name: of doggies
 * @age: of doggies
 * @owner: of doggies
 *
 * Description: saves info about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
