//creation of s priority queue
#include<stdio.h>
#include<stdlib.h>
#define max 10
int pqueue[2][max];
int front=-1;
int rear=-1;
//insertion
void enqueue_pqueue(int x, int y) //insert
{
    if(!isfull())
    {
        if(isempty())
            front=rear=0;
        else
            rear++;
        pqueue[0][rear]=x; //value
        pqueue[1][rear]=y; //priority
        arrange();
    }
    else
        printf("overflow :/");
}
//arrange acc to priority
void arrange() 
{
    int i, j;
    if(sizeof(pqueue)>1)
    for(i=front; i<=rear; i++)
    {
        for(j=i+1; j<=rear; j++) //doubt
        {
            if(pqueue[1][i]>pqueue[1][j]) //comparing priorities 
            {
                int temp;
                temp=pqueue[1][i];
                pqueue[1][i]=pqueue[1][j];
                pqueue[1][j]=temp;
                temp=pqueue[0][i];
                pqueue[0][i]=pqueue[0][j];
                pqueue[0][j]=temp;
            }
        }
    }

}
void dequeue_pqueue() //delete
{
    if(!isempty())
    {
        int x;
        x=pqueue[0][front];
        int y;
        y=pqueue[1][front];
        if(front==rear)
            front=rear=-1;
        else 
            front++;
        printf("element deleted was %d and priority was %d", x, y);
    }
    else 
        printf("underflow :/");
}
void display()
{
    if(!isempty())
    {
        arrange();
        printf("queue - priority :  ");
        int i;
        for(i=front; i<=rear; i++)
            printf("%d-%d\t", pqueue[0][i], pqueue[1][i]);
    }
    else    
        printf("underflow :/");
}
int isempty()
{
    if(front==-1&&rear==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(rear==max-1)
        return 1;
    else 
        return 0;
}
void showrear()
{
    if(!isempty())
        printf("rear element - %d", pqueue[rear]);
    else 
        printf("underflow :/");
}
void showfront()
{
    if(!isempty())
        printf("front element - %d", pqueue[front]);
    else 
        printf("underflow :/");
}
int main()
{
    int choice, x, element, priority;
    do
    {
        printf("\n1. insert\n2. delete\n3. front\n4. rear\n5. full\n6. empty\n7. display\n8. exit");
        printf("\nchoose : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: //insert
            {
                printf("element : ");
                scanf("%d", &element);
                printf("priority : ");
                scanf("%d", &priority);
                enqueue_pqueue(element, priority);
                break;
            }
            case 2: //delete
            {
                dequeue_pqueue();
                break;
            }
            case 3: //show front element
            {
                showfront();
                break;
            }
            case 4: //show rear element 
            {
                showrear();
                break;
            }
            case 5: //check full
            {
                x=isfull();
                if(x==1)
                    printf("full");
                else 
                    printf("not full :/");
                break;
            }
            case 6: //check empty
            {
                x=isempty();
                if(x==1)
                    printf("empty");
                else 
                    printf("not empty :/");
                break;
            }
            case 7: //display
            {
                display();
                break;
            }
            case 8:
            {
                exit(1);
                break;
            }
        }
    }while(1);
    return 0;
}
