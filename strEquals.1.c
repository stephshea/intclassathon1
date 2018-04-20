#define _GNU_SOURCE
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <ctype.h>

int case_compare(char *a, char *b)
{
    char c;

    while(*a)
    {
        c = toupper(*a) - toupper(*b);
        if( c != 0 )
            return(c);
        a++;
        b++;
    }
    return(c);
}

int main()
{
    char first[32],second[32];

/* Fetch strings */
    puts("String comparison");
    printf("First string: ");
    fgets(first,32,stdin);
    printf("Second string: ");
    fgets(second,32,stdin);

/* Compare */
    if( case_compare(first,second)==0 )
        puts("Strings match");
    else
        puts("Strings don't match");

    return(0);
}