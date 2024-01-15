#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * strtow - Splits a string into words.
 *   *
 *    * @str: The string to be split.
 *     *
 *      * Return: A pointer to an array of strings (words), or NULL if str is NULL or empty.
 *       *         The last element of the array is NULL.
 *        */
char **strtow(char *str) {
	    if (str == NULL || *str == '\0') {
		            return NULL; // Check for invalid input
					 //     }
					 //
					 //         int i, j, k, word_count = 0;
					 //             char **words = NULL;
					 //                 char *word = NULL;
					 //
					 //                     // Count the number of words in the string
					 //                         for (i = 0; str[i] != '\0'; i++) {
					 //                                 if (str[i] != ' ') {
					 //                                             word_count++;
					 //                                                         while (str[i] != ' ' && str[i] != '\0') {
					 //                                                                         i++;
					 //                                                                                     }
					 //                                                                                             }
					 //                                                                                                 }
					 //
					 //                                                                                                     if (word_count == 0) {
					 //                                                                                                             return NULL; // No words found
					 //                                                                                                                 }
					 //
					 //                                                                                                                     words = (char **)malloc((word_count + 1) * sizeof(char *));
					 //                                                                                                                         if (words == NULL) {
					 //                                                                                                                                 return NULL; // Memory allocation failed
					 //                                                                                                                                     }
					 //
					 //                                                                                                                                         i = 0;
					 //                                                                                                                                             k = 0;
					 //
					 //                                                                                                                                                 while (str[i] != '\0') {
					 //                                                                                                                                                         if (str[i] != ' ') {
					 //                                                                                                                                                                     j = i;
					 //                                                                                                                                                                                 while (str[i] != ' ' && str[i] != '\0') {
					 //                                                                                                                                                                                                 i++;
					 //                                                                                                                                                                                                             }
					 //
					 //                                                                                                                                                                                                                         word = (char *)malloc((i - j + 1) * sizeof(char));
					 //                                                                                                                                                                                                                                     if (word == NULL) {
					 //                                                                                                                                                                                                                                                     // Memory allocation failed, free previously allocated memory
					 //                                                                                                                                                                                                                                                                     for (k = 0; k < word_count; k++) {
					 //                                                                                                                                                                                                                                                                                         free(words[k]);
					 //                                                                                                                                                                                                                                                                                                         }
					 //                                                                                                                                                                                                                                                                                                                         free(words);
					 //                                                                                                                                                                                                                                                                                                                                         return NULL;
					 //                                                                                                                                                                                                                                                                                                                                                     }
					 //
					 //                                                                                                                                                                                                                                                                                                                                                                 for (k = 0; j < i; k++, j++) {
					 //                                                                                                                                                                                                                                                                                                                                                                                 word[k] = str[j];
					 //                                                                                                                                                                                                                                                                                                                                                                                             }
					 //                                                                                                                                                                                                                                                                                                                                                                                                         word[k] = '\0';
					 //                                                                                                                                                                                                                                                                                                                                                                                                                     words[k] = word;
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                 k++;
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                         } else {
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                     i++;
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                             }
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                 }
					 //
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                     words[k] = NULL;
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                         return words;
					 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
					 //
