/*
            *
            **
            ***
            ****
            *****
            ******
            *******
*/

#include <stdio.h>
#include <string.h>
#define CHARCOUNT 6
int main()
{
    char charArray[CHARCOUNT];
    int i, j;
    char baseString[49];
    char *singleChar = "*";
   
    for (i = CHARCOUNT; i >= 0; i--)
    {
        for ( j = i; j < CHARCOUNT; j++)
        {
            strcat(baseString, singleChar);
        }
        strcat(baseString, "\n");
    }
    printf("%s\n", baseString);
    
    return 0;
}