#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int peek() {
    return stack[top];
}
