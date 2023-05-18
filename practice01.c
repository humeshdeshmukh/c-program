#include <stdio.h>
#define MAXSIZE 100 // Maximum size of stack

int stack[MAXSIZE]; // Stack array
int top = -1; // Index of top element in stack

void push(int element) {
    if (top == MAXSIZE - 1) { // Check if stack is full
        printf("Stack is full.\n");
    }
    else {
        top++; // Increment top index
        stack[top] = element; // Add element to stack
        printf("Pushed %d onto the stack.\n", element);
    }
}

void pop() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    }
    else {
        printf("Popped %d from the stack.\n", stack[top]);
        top--; // Decrement top index
    }
}

void display() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    }
    else {
        printf("Stack contents: ");
        for (int i = top; i >= 0; i--) { // Print elements in reverse order
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;
    while (1) { // Loop until user chooses to exit
        printf("Enter 1 to push an element, 2 to pop an element, 3 to display stack contents, or 4 to exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
