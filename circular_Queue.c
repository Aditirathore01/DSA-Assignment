#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Insert element
void insert(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("Queue is Full\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
}

// Delete element from front
void deleteElement()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

// Display queue
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Circular Queue: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main()
{
    // Insert 10, 20, 30, 40
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    printf("After inserting 10, 20, 30, 40:\n");
    display();

    // Delete two elements
    deleteElement();
    deleteElement();

    // Insert 50 and 60
    insert(50);
    insert(60);

    printf("\nAfter inserting 50 and 60:\n");
    display();

    return 0;
}