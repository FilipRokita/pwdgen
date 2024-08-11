// pwdgen
//  Filip Rokita
// www.filiprokita.com

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 2147483647

int main(int argc, char *argv[])
{
    // check if the user provided the correct number of arguments
    if (argc != 2)
    {
        printf("Usage: %s <length>\n", argv[0]);
        return 1;
    }

    // save argv[1] as an string
    char *input = argv[1];

    // check if the user provided a number
    for (int i = 0, len = strlen(input); i < len; i++)
    {
        if(!isdigit(input[i]))
        {
            printf("Only numbers may be provided\n");
            return 1;
        }
    }

    // convert the string to an integer
    int length = atoi(input);

    // check length of string
    // FIX: prevent segmentation fault!
    if (length > MAX_LENGTH)
    {
        printf("Maximum length allowed is %d\n", MAX_LENGTH);
        return 1;
    }

    // generate a pseudo-random password
    // try to allocate size in memory
    char *password = malloc(length + 1);
    if (password == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        password[i] = (rand() % 94) + 33;
    }

    // FIX: null-terminated string
    password[length] = '\0';

    // print the password
    printf("%s\n", password);

    // free allocated block
    free(password);
}