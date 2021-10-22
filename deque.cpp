#include<stdio.h>
int r=-1,f=-1,deque[30],max;
int isempty();
int isfull();
void insert_rear(int);
void insert_front(int);
void delete_front();
void delete_rear();
void display();
int main()
{
    int choice,item;
    printf("enter the size of deque::");
    scanf("%d",&max);
    do{
    printf("1.insert_front\n2.insert_rear\n3.delete_front\n4.delete_rear\n5.display");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter the item::");
        scanf("%d",&item);
        insert_front(item);
        break;
        case 2:printf("enter the item::");
        scanf("%d",&item);
        insert_rear(item);
        break;
        case 3:delete_front();
        break;
        case 4:delete_rear();
        break;
        case 5:display();
        break;
        default: printf("wrong choice::");
        
    }
    }while(choice!=6);
}
int  isempty()
{
    if(f==-1 && r==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(f==(r+1)%max)
    return 1;
    else 
    return 0;
}
void insert_rear(int item)
{
    if(isfull())   
    printf("\n deque overflow::");
    else
    {
        if(r==-1  && f==-1)
        r=f=0;
        else
        r=(r+1)%max;
        deque[r]=item;
        printf("\nelement is inserted in rear\n");
    }
    
}
void insert_front(int item)
{
    if(isfull())
    printf("\noverflow....");
    else
    {
        if(r==-1   && f==-1)
        f=r=0;
        else if(f==0)
        f=max-1;
        else
        f=f-1;
        deque[f]=item;
        printf("\nelement is inserted in front\n");
    }
}
void delete_front()
{
    if(isempty())
    printf("\nunderflow....\n");
    else
    {
        printf("deleted element id %d\n",deque[f]);
        if(f==r)
        f=r=-1;
        else
        f=(f+1)%max;
    }
}
void delete_rear()
{
    if(isempty())
    printf("\nunderflow....\n");
    else
    {
        printf("deleted element id %d\n",deque[r]);
        if(f==r)
        f=r=-1;
        else if(r==0)
        r=max-1;
        else
        r=r-1;
    }
    
}
void display()
{
    int i=f;
    while(i!=r)
    {
        printf("%d,",deque[i]);
        i=(i+1)%max;
        
    }
    
    printf("%d,",deque[r]);
}
