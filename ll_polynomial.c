//wap to polynomial implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coeff; 
	int pow;
	struct node *next;
	
};
struct node *h1=NULL,*h2=NULL,*h3=NULL,*nn=NULL,*t=NULL,*t1,*t2;
int main()
{
	int ch;
	printf("enter first polynomial\n");
	do
	{
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter coefficint \n");
	scanf("%d",&nn->coeff);
	printf("enter power");
	scanf("%d",&nn->pow);
	nn->next=NULL;
	if(h1==NULL)
	{
	h1=nn;
	t=h1;
    }
	else
	{
		t->next=nn;
		t=t->next;
	}
	printf("you want to inswert more data\n press 1 else 0\n");
	scanf("%d",&ch);
    }
	while(ch!=0);
	
	
	printf("enter second polynomial\n");
	do
	{
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter coefficint \n");
	scanf("%d",&nn->coeff);
	printf("enter power");
	scanf("%d",&nn->pow);
	nn->next=NULL;
	if(h2==NULL)
	{
	h2=nn;
	t=h2;
    }
	else
	{
		t->next=nn;
		t=t->next;
	}
	printf("you want to inswert more data\n press 1 else 0\n");
	scanf("%d",&ch);
    }
	while(ch!=0);
	
	
	//lets do sum
	t1=h1;
	t2=h2;
	while(t1!=NULL&&t2!=NULL)
	{
	if(t1->pow==t2->pow)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->coeff=t1->coeff+t2->coeff;
		nn->pow=t1->pow;
		nn->next=NULL;
	if(h3==NULL)
	{
	h3=nn;
	t=h3;
    }
	else
	{
		t->next=nn;
		t=t->next;
	}
	t1=t1->next;
	t2=t2->next;
	}
	else
	{
		if(t1->pow>t2->pow)
		{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->coeff=t1->coeff;
		nn->pow=t1->pow;
		nn->next=NULL;
	    if(h3==NULL)
	    {
	    h3=nn;
	    t=h3;
        }
	    else
	    {
		t->next=nn;
		t=t->next;
	    }
	    t1=t1->next;
	    }
		else
		{
			nn=(struct node*)malloc(sizeof(struct node));
		nn->coeff=t2->coeff;
		nn->pow=t2->pow;
		nn->next=NULL;
	    if(h3==NULL)
	    {
	    h3=nn;
	    t=h3;
        }
	    else
	    {
		t->next=nn;
		t=t->next;
	    }
	    t2=t2->next;
		}   
    }
}
if(t1==NULL)
{
	while(t2!=NULL)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->coeff=t2->coeff;
		nn->pow=t2->pow;
		nn->next=NULL;
	    if(h3==NULL)
	    {
	    h3=nn;
	    t=h3;
        }
	    else
	    {
		t->next=nn;
		t=t->next;
	    }
	    t2=t2->next;
	}   
	
}
else
{
	while(t1!=NULL)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->coeff=t1->coeff;
		nn->pow=t1->pow;
		nn->next=NULL;
	    if(h3==NULL)
	    {
	    h3=nn;
	    t=h3;
        }
	    else
	    {
		t->next=nn;
		t=t->next;
	    }
	    t1=t1->next;
	}   
	
}
t=h3;
printf("your answer is:-\n");
while(t!=NULL)
{
	printf("%dx^%d  ",t->coeff,t->pow);
	t=t->next;
}
return 0;
}
