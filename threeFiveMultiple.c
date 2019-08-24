/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
Source: https://projecteuler.net/problem=1
*/

#include <stdio.h>

#define MAX 1000

int main(void) {

    int i = 0;
    int sum = 0;
    while (i < MAX) { // loop through numbers from 1 to 1000
        if (i % 3 == 0 || i % 5 == 0) { // if a multiple of 3 or 5 add to sum
            sum += i;
        }
        i++;
    }
    printf("%d", sum);

    return 0;
}