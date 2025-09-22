  /* #include <stdio.h>
   ex 1-13

int main() {
    int c;
    int len = 0;
    int arr[15] = {0};  // word lengths up to 14 letters

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (len > 0) {
                if (len < 15) arr[len]++;
                len = 0;
            }
        } else {
            len++;
        }
    }
    if (len > 0 && len < 15) arr[len]++;

    for (int i = 1; i < 15; i++) {
        if (arr[i] > 0) {
            printf("%d: ", i);
            for (int j = 0; j < arr[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
*/

/* ex 1-18 
 *
 *
 * #include <stdio.h>
#define MAX 1000

int main() {
    char line[MAX];
    int c, i;

    while (1) {
        i = 0;
        while ((c = getchar()) != EOF && c != '\n') {
            line[i] = c;
            i++;
        }
        if (c == EOF) break;
        line[i] = '\0';
        while (i > 0 && (line[i-1] == ' ' || line[i-1] == '\t')) {
            i--;
            line[i] = '\0';
        }
        if (i > 0) {
            printf("%s\n", line);
        }
    }
    return 0;
}
*/


/* ex 1-19 
 *
 * #include <stdio.h>
#define MAX 1000

void reverse(char str[]) {
    int start = 0;
    int end = 0;
    char temp;

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char line[MAX];
    int c, i;

    while (1) {
        i = 0;
        while ((c = getchar()) != EOF && c != '\n') {
            line[i] = c;
            i++;
        }
        if (c == EOF && i == 0) break;
        line[i] = '\0';
        reverse(line);
        printf("%s\n", line);
        if (c == EOF) break;
    }

    return 0;
}

      
