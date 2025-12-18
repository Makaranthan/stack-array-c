#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    if(top == MAX-1) { printf("Stack Overflow!\n"); return; }
    int x; printf("Enter value to push: "); scanf("%d",&x);
    stack[++top] = x; printf("%d pushed to stack\n", x);
}

void pop() {
    if(top == -1) { printf("Stack Underflow!\n"); return; }
    printf("%d popped from stack\n", stack[top--]);
}

void display() {
    if(top == -1) { printf("Stack is empty\n"); return; }
    printf("Stack elements: "); for(int i=0;i<=top;i++) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice: "); scanf("%d",&choice);
        switch(choice){
            case 1: push(); break; case 2: pop(); break; case 3: display(); break;
            case 4: return 0; default: printf("Invalid choice\n");
        }
    }
}
