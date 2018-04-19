#include <cs50.h>
#include <stdio.h>
#include <math.h>

long long factorialize(int num);

int main(int argc, string argv[])
{
    if (argc == 2) //check is 2 arguments are entered on command line
    {
        int num = atoi(argv[1]); //assign argv[1] string tio int
    }

     else
    {
        printf("you must enter 2 args\n"); //display error if use does not enter two args
        return 1; //end program
    }

   factorialize(num);
   return 0;
}


long long factorialize(num)

{

int i;
long long factor = 1;

for (i = 1; i<=num; i++)
    {
    factor *=i;
    }

    printf("factorialize = %lld \n", factorialize);
}

fib
(int num)
int first = 0;
int last =1;
int sum_odds = 1
int sum = 0

sum<= num
{
    sum = first  + last
    first  lat
    last = sum
    if (sum %2 != 0 && sum <= num
    {

        sum_odds num
    })
}