#define SIZE 100
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if(rear == SIZE - 1)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = value;
    }
}

int dequeue() {
    if(front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        return queue[front++];
}
