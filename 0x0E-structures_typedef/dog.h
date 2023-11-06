#ifndef POPPY
#define POPPY
/**
 * * * struct dog - a structure for my dog
 * @name: first member to rep name
 * @age: second member
 * @owner: Third member
 *
 * Description: The work of this structure is to
 * store the varius attributes of my dog
 */
struct dog
{
	    char *name;
	    float age;
	    char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
