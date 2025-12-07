#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    char output[100];
    int i = 0;
    int j = 0;
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    while (input[i] != '\0') {
        if (isalpha(input[i])) {
            output[j] = input[i];
            j++;
        }
        i++;
    }
    output[j] = '\0';
    
    printf("Output String: %s\n", output);
    
    return 0;
}