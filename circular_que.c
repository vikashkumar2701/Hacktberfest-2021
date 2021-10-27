#include<stdio.h>
int que[30];
int f=-1,r=-1;
int max;
void front();
void enque(int);
void deque();
void display();
int isempty();
int isfull();
void size();
int main()
{
    int choice,item;
   printf("\nenter the size of que::");
   scanf("%d",&max);
   do
   {
   printf("\n1.enque\n2.deque\n3.display\n4.front\n5.size");
   printf("\nenter the choice::");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:printf("\nenter the element::");
       scanf("%d",&item);
          enque(item);
       break;
       case 2: deque();
       break;
       case 3:display();
       break;
       case 4:front();
       break;
       case 5:size();
       break;
       default:printf("\nwrong choice");
   }
   }while(choice!=6);
}
int isempty()
{
   if(r==-1)
   return 1;
   else
   return 0;
   
}
int isfull()
{
    if(((r==max-1)&&(f==0))||(f==r+1))
    return 1;
    else
    return 0;
     
}
void enque(int item)
{
    if(isfull())
    printf("\noverflow");
    else
    {
    if((r==-1)&&(f==-1))
    f=r=0;
    else
    r=(r+1)%max;
    que[r]=item;
}
    
}
void deque()
{
    if(isempty())
    printf("\nunderflow...");
    else
    {
        printf("deleted element is %d",que[f]);
        if(f==r)
        f=r=-1;
        else
        f=(f+1)%max;
    }
}
void display()
{
    int i;
    if(isempty())
    {
        printf("no element to display");
    }
    else
    {
        if(f<=r)
        {
            for(i=f;i<=r;i++)
           {
             printf("%d ",que[i]);
           }
        }
        else
        {
        for(i=f;i<max;i++)
        {
          printf("%d ",que[i]);   
        }
        for(i=0;i<=r;i++)
        {
           printf("%d ",que[i]);    
        }
        }
    }
}
void front()
{
    printf("front element is %d",que[f]);
  }
  void size()
  {
      if(r>=f)
      printf("size is %d",r-f+1);
      else
      printf("siz is %d",(max-f)+(r+1));
  }

