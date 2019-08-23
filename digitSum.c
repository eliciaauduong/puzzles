/*
Find the sum of digits of a 5 digit number.
*/
#include <stdio.h>

int main(void) {

    int num = 0;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    int sum = 0;
    // loop adds digits of the number from ones to ten-thousands
    while (num > 0) { // while the number remains greater than 0
        sum += (num % 10); // add the remainder of the number divided by 10
        num /=10; // divide the number by 10
    }

    printf("%d\n", sum);
    
    return 0;
}