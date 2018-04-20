#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str1 = get_string("enter string1: ");
    string str2 = get_string("enter string2: ");


int ret = strcmp(str1, str2);
if(ret == 0)
    {
        ret =0;
        printf("The string exists \n %i\n", ret);
    }
else
    {
        ret = 1;
        printf("The string does not exist\n %i\n", ret);
    }

}