#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "this is a test string";  
    char *p;
    
    printf("Strings or words after split by space are:\n");
    
    p = strtok(s, " ");
    while (p != NULL)
    {
        printf("%s\n", p);           
        p = strtok(NULL, " ");
    }
    
    return 0;
}