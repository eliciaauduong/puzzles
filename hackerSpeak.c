/*
Create a function that takes a string as an argument and returns a coded 
(h4ck3r 5p34k) version of the string.
*/

#include <stdio.h>
#include <string.h>

char *hackerSpeak(char *string);

int main(void) {

    char string[] = "programming is cool";
    printf("%s\n", string);
    printf("%s\n", hackerSpeak(string));

    return 0;
}

char *hackerSpeak(char *string) {

    int len = strlen(string);
    int i = 0;
    while (i < len) {
        if (string[i] == 'a') {
            string[i] = '4';
        } else if (string[i] == 'e') {
            string[i] = '3';
        } else if (string[i] == 'i') {
            string[i] = '1';
        } else if (string[i] == 'o') {
            string[i] = '0';
        } else if (string[i] == 's') {
            string[i] = '5';
        }
        i++;
    }

    return string;
}