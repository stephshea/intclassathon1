#include <cs50.h>
#include <stdio.h>
#include <math.h>

long long factorialize(int num);

int main(int argc, string argv[])

{
    int num;

    if (argc == 2) //check if 2 arguments are entered on command line
    {
        num = atoi(argv[1]); //assign argv[1] string to int
    }

     else
    {
        printf("you must enter 2 args\n"); //display error if use does not enter two args
        return 1; //end program
    }

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

