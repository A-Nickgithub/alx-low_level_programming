#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 *generate_random_char - Generates a random character from the given character set
 *@charset: Character set to choose from
 *@charset_length: Length of the character set
 *
 *Returns: A random character from the character set
 */
char generate_random_char(const char *charset, int charset_length)
{
	return charset[rand() % charset_length];
}
int main()
{
	const char uppercase_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char lowercase_chars[] = "abcdefghijklmnopqrstuvwxyz";
	const char digits[] = "0123456789";
	const char special_chars[] = "!@#$%^&*()_+{}[]|;:'<>,./?";
			    
	int uppercase_length = sizeof(uppercase_chars) - 1;
	int lowercase_length = sizeof(lowercase_chars) - 1;
	int digits_length = sizeof(digits) - 1;
	int special_length = sizeof(special_chars) - 1;

	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	int choice = rand() % 4
		switch (choice)
		{
			case 0:
				password[i] = generate_random_char(uppercase_chars, uppercase_length);
				break;
			case 1:
				password[i] = generate_random_char(lowercase_chars, lowercase_length);
				break;
			case 2:
				password[i] = generate_random_char(digits, digits_length);
				break;
			case 3:
				password[i] = generate_random_char(special_chars, special_length);
				break;
		}
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);
	printf("Tada! congrats\n");
	return (0);
}
