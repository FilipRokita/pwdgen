// pwdgen
// Filip Rokita
// www.filiprokita.com

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define MAX_LENGTH 1024 // set more reasonable password length limit

int main(int argc, char *argv[])
{
    // check if the user provided the correct number of arguments
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <length>\n", argv[0]);
        return 1;
    }

    // save argv[1] as a string
    char *input = argv[1];

    // check if the user provided a number
    for (int i = 0, len = strlen(input); i < len; i++)
    {
        if (!isdigit(input[i]))
        {
            fprintf(stderr, "Error: Only numbers may be provided\n");
            return 1;
        }
    }

    // convert the string to an integer safely
    char *endptr;
    long length = strtol(input, &endptr, 10); // fixed: more secure integer conversion

    // check if the conversion was successful
    if (*endptr != '\0' || length <= 0 || length > MAX_LENGTH)
    {
        fprintf(stderr, "Error: Invalid length. Please provide a number between 1 and %d\n", MAX_LENGTH);
        return 1;
    }

    // generate a pseudo-random password
    char *password = malloc(length + 1);
    if (password == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return 1;
    }

    // seed the random number generator
    // fixed: added a seeding step with time(NULL) to make the password more random
    srand((unsigned int)time(NULL));

    for (int i = 0; i < length; i++)
    {
        password[i] = (rand() % 94) + 33; // generates a character in the printable ASCII range
    }

    // null-terminate the string
    password[length] = '\0';

    // print the password
    printf("%s\n", password);

    // free allocated memory
    free(password);

    return 0;
}
