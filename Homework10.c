#include <stdio.h>
#include <string.h>
#include <ctype.h>

void process(char *str, void (*func)(char *)) {
    func(str);
}

void to_upper(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

void to_lower(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

void reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

void count_chars(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    printf("Number of characters: %d\n", count);
}

void remove_spaces(char *s) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main() {
    char str1[100] = "hello world";
    char str2[100] = "hello world";
    char str3[100] = "hello world";
    char str4[100] = "hello world";
    char str5[100] = "hello world";
    
    printf("Original string: %s\n\n", str1);
    
    process(str1, to_upper);
    printf("Uppercase: %s\n", str1);
    
    process(str2, to_lower);
    printf("Lowercase: %s\n", str2);
    
    process(str3, reverse);
    printf("Reversed: %s\n", str3);
    
    printf("Count: ");
    process(str4, count_chars);
    
    process(str5, remove_spaces);
    printf("No spaces: %s\n", str5);
    
    return 0;
}