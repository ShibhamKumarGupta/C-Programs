#include <stdio.h>
#define MAX 5
int queue[MAX];
int first = -1;
int last = -1;
void enqueue(int value);
void dequeue();
void display();
int main()
{
    enqueue(2);
    enqueue(45);
    enqueue(67);
    
    enqueue(100);
    enqueue(23);
    enqueue(78);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}
void enqueue(int value)
{
    if (last == (MAX - 1))
    {
        printf("The Queue is full! cannot insert\n");
    }
    else if (first == -1 && last == -1)
    {
        first = last = 0;
        queue[last] = value;
    }
    else
    {
        last++;
        queue[last] = value;
    }
}
void dequeue()
{
    if (first == -1 && last == -1)
    {
        printf("Queue is empty! cannot delete!!\n");
    }
    else if (first == last)
    {
        int a = queue[last];
        printf("%d is dequeued\n", a);
        first = last = 0;
    }
    else
    {
        printf("%d is being dequeued\n", queue[first]);
        first++;
    }
}

void display()
{
    if (first == -1 && last == -1)
    {
        printf("Queue is empty cannot display!!\n");
    }
    else
    {
        for (int i = first; i <= last; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}