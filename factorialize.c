#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{

int num = get_int("Enter num: ");

int i;
long long factorialize = 1;

for (i = 1; i<=num; i++)
    {
        factorialize *=i;
    }

    printf("factorialize = %lld \n", factorialize);
}