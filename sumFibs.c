#include <cs50.h>
#include <stdio.h>
#include <math.h>

int sumFibs(int num);

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

    printf("sumFibs num %i = %i\n", num, sumFibs(num));
    return 0;
}

int sumFibs(num)
{

int first = 0;
int last = 1;
int sum_odds = 1;
int sum = 0;

while (sum <= num)
{
    sum = first + last;
    first = last;
    last = sum;

        if (sum %2 != 0 && sum <= num)
        {
            sum_odds += sum;
        }
    }
    return sum_odds;
}