#include <stdio.h>
#include <stdlib.h>

#define max_size 100

int stack[max_size], top = -1;
int i, n, choice;

void push();
void pop();
void display();

int main() {
    printf("Enter the element: ");
    scanf("%d", &n);
    printf("Stack operations\n");
    do {
        printf("\nChoose one:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter valid value.\n");
        }
    } while (choice != 4);
    return 0;
}

void push() {
    int val;
    if (top == max_size - 1) {
        printf("Overflow\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
