/*
Create a function that takes a single string as argument and returns an ordered 
array containing the indexes of all capital letters in the string.
*/

#include <stdio.h>
#include <string.h>

#define MAX 1000

void capIndex(char *string, int array[MAX]);

int main(void) {

    int array[MAX] = {0};
    char string[MAX] = "eQuINoX";
    capIndex(string, array);
    int i = 0;
    while (array[i] != 0) {
        printf("%d ", array[i]);
        i++;
    }
    return 0;
}

void capIndex(char *string, int array[MAX]) {
    int i = 0;
    int len = strlen(string);
    int index = 0;
    while (i < len) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            array[index] = i;
            index++;
        }
        i++;
    }
}