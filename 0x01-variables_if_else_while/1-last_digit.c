#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes here */
    int last_digit = n % 10; // get the last digit of n by modulo 10
    printf("Last digit of %d is %d", n, last_digit); // print the last digit of n
    if (last_digit > 5) // if the last digit is greater than 5
    {
        printf(" and is greater than 5\n"); // print and is greater than 5
    }
    else if (last_digit == 0) // if the last digit is 0
    {
        printf(" and is 0\n"); // print and is 0
    }
