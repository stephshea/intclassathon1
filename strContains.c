#define _GNU_SOURCE
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

string str1 = get_string("enter string1: ");
string str2 = get_string("enter string2: ");

if (strcasestr(str1, str2) != NULL)
    {
        printf("The string exists \n 0\n");
    }
else
    {
        printf("The string does not exist\n 1 \n");
    }
}