// pwdgen
//  Filip Rokita
// www.filiprokita.com

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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

    // generate a random password
    char password[length];
    for (int i = 0; i < length; i++)
    {
        password[i] = (rand() % 94) + 33;
    }

    // print the password
    printf("%s\n", password);
}