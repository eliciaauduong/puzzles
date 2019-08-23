/*
Create a function that takes an integer and returns the factorial.
*/

#include <stdio.h>

unsigned long long factorial(int num);

int main(void) {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%llu\n", factorial(num));

}

unsigned long long factorial(int num) {
    unsigned long long total = 1;
    int i = 1;
    while (i <= num) {
        total *= i;
        printf("%d %llu\n", i, total);
        i++;
    }
    return total;
}