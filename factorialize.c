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
int num = get_int("Enter num: ");
printf("num%i: \n", num);

int i;
long long factor = 1;

for (i = 1; i<=num; i++)
    {
    factor *=i;
    }

    printf("factorialize = %lld \n", factorialize);
}



