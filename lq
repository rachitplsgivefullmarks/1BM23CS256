#include <stdio.h>
#define SIZE 5
int Q[SIZE], front=-1, rear=-1;
void insert();
void delete();
void display();

void insert()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    if (rear==SIZE-1)
    {
    printf("Overflow");
    break;
    }
    else if(front==-1&&rear==-1)
    {
    front=0;
    rear=0;
    }
    else
    {
    rear++;
    }
    Q[rear]=num;
}

void delete()
{
    int val;
    if (front==-1||front>rear)
    {
    printf("Underflow");
    }
    else
    {
    val=Q[front];
    front++;
    if (front>rear)
    {
    rear=-1;
    front=-1;
    }
    printf("Deleted Element: %d", val);
    }
}

void display()
{
    int i;
    if(front==-1||front>rear)
    {
    printf("Queue is empty");
    }
    else
    {
    for (i=front;i<=rear;i++)
    {
        printf("%d\n",Q[i]);
    }
 }
}
int main()
{
int ch=0,opt;
while(ch==0)
{
printf("1.insert\n2.delete\n3.display\n4.exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1: insert();break;
case 2: delete();break;
case 3:display();break;
case 4:exit(0);
default: printf("invalid");
}
printf("Press 0 to continue");
scanf("%d",&ch);
}
return 0;
}
