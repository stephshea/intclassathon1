#include <cs50.h>
#include <stdio.h>
#include <math.h>

long long factorialize(int num);

int main(void)
{
    int num = get_int("enter number: ");
    printf("factorialized num %i = %lld\n", num, factorialize(num));
    return 0;
}

long long factorialize(int num)
{

long long factor = 1;

    for (int i = 1; i<=num; i++)
        {
            factor *=i;
        }

    return factor;
}