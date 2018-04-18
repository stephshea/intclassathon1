#include <cs50.h>
#include <stdio.h>
#include <math.h>

factorialize();

int main(void)
{
   factorialize();
   return 0;
}

factorialize()
{

int i;
int num = 0;
long long factor = 1;

num = get_int("Enter num: ");

for (i = 1; i<=num; i++)
    {
        factor *=i;
    }
    printf("factorialize = %lld \n", factor);
}


