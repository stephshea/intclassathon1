#include <cs50.h>
#include <stdio.h>

//can't call a function within a function in

bool isPrime(int num);
int sumPrimes(int number);
//will return a value of bool so containing variable needs to accept bool
//delcaring function just need the type it will accept

int main(void)

{
    int input = get_int("enter number: ");
    printf("number %i\n", input);
    printf("%i\n", sumPrimes(input));
    if (isPrime(input))

    {
        printf("%i is prime", input);
    }

    else
    {
        printf("%i is not prime", input);
    }

}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 )
        {
            return false;
        }
    }
    return true;
}

  int sumPrimes (int number)
  {
    int sum = 0;
    for (int i = 2; i <= number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
      return sum;
  }