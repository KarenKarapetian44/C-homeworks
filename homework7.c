#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int *s, int *t, int value) {
    if (*t == MAX - 1) {
        printf("Stack is full\n");
        return;
    }
    (*t)++;
    *(s + *t) = value;
    printf("%d pushed to stack\n", value);
}

int pop(int *s, int *t) {
    if (*t == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    int value = *(s + *t);
    (*t)--;
    return value;
}

void display(int *s, int *t) {
    if (*t == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = *t; i >= 0; i--) {
        printf("%d ", *(s + i));
    }
    printf("\n");
}

int main() {
    push(stack, &top, 10);
    push(stack, &top, 20);
    push(stack, &top, 30);
    
    display(stack, &top);
    
    printf("Popped: %d\n", pop(stack, &top));
    
    display(stack, &top);
    
    push(stack, &top, 40);
    
    display(stack, &top);
    
    return 0;
}