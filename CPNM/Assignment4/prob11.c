/*
Write a function squeeze(s,c) which removes all occurrences of the character c from the string s.
*/

#include <stdio.h>

void squeeze(char s[], char c) {
    int i, j = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main() {
    char str[] = "Hello, World!";
    char char_to_remove = 'o';
    
    printf("Original string: %s\n", str);
    squeeze(str, char_to_remove);
    printf("Modified string: %s\n", str);
    
    return 0;
}
