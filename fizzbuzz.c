/*
The FizzBuzz Challenge
Write a program that prints all the numbers from 1 to 100. 
For multiples of 3, instead of the number, print “Fizz”.
For multiples of 5 print “Buzz”. 
For numbers which are multiples of both 3 and 5, print “FizzBuzz”.
*/

#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 100; i++) { // for each number from 1 to 100
        if (i % 3 == 0) { // if the number is divisible by 3
            if (i % 5 == 0) { // if also divisible by 5 (divisible by 15)
                printf("FizzBuzz\n");
            } else { // only divisible by 3
                printf("Fizz\n");
            }
        } else if (i % 5 == 0) { // if only divisible by 5
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}