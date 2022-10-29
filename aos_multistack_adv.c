#include<stdio.h>
#include<stdlib.h>
#define max 20
void push1(int item);
int pop1();
int isempty1();
int stack1[max];
int top1=-1;
void display1();
int isfull1();

void display2();
void push2(int item);
int pop2();
int isempty2();
int stack2[max];
int top2=max;
int isfull2();

void display3();
void push3(int item);
int pop3();
int isempty3();
int stack3[max];
int top3=2;
int isfull3();
int main()
{
	int ch,ele;
	do
	{
		printf("\n1 for push 1\n1 for push 2\n3 for pop 1\n4 for pop 2\n");
		printf("5 for display 1\n6 for display 2\n7 for push3\n8 for pop3\n9 for dis 3\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter ele to push\n");
			       scanf("%d",&ele);
			       push1(ele);
			       break;
			case 2:printf("enter ele to push\n");
			       scanf("%d",&ele);
			       push2(ele);
			       break;
			case 3:printf("%d\n",pop1());
			       break;
			case 4:printf("%d\n",pop2());
			       break;
			case 5:display1();
			       break;
			case 6:display2();
			       break;
			case 7:printf("enter ele to push\n");
			       scanf("%d",&ele);
			       push3(ele);
			       break;
			case 8:printf("%d\n",pop3());
			       break;
			case 9:display3();
			       break;
			case 10:exit(0);
		}
    }
    while(1);
    return 0;
}
void push1(int item)
{
	if(isfull1()!=0)
	{
	   top1++;
	   stack1[top1]=item;
    }
}
int pop1()
{
	int ele;
	if(isempty1()!=0)
	{
		ele=stack1[top1];
		top1--;
		return ele;
	}

}
int isempty1()
{
	if(top1==-1)
	{
	printf("stack is empty\n");
	return 0;
    }
    else
    return 1;
}
void display1()
{
	int i;
	for(i=0;i<=top1;i++)
	printf("%d",stack1[i]);
} 
int isfull1()
{
	if((top3>2&&top1==3)||top2==top1+1)
	{
		printf("stack is full\n");
		return 0;
	}
	else
	return 1;
}




void push2(int item)
{
	if(isfull2()!=0)
	{
	   top2--;
	   stack2[top2]=item;
    }
}
int pop2()
{
	int ele;
	if(isempty2()!=0)
	{
		ele=stack2[top2];
		top2++;
		return ele;
	}
}
int isempty2()
{
	if(top2==max)
	{
	printf("stack is empty\n");
	return 0;
    }
    else
    return 1;
}
void display2()
{
	int i;
	for(i=max-1;i>=top2;i--)
	printf("%d",stack2[i]);
}
int isfull2()
{
	if((top2==top3+1&&top3>2)||top2==top1+1)
	{
		printf("stack is full\n");
		return 0;
	}
	else
	return 1;
}




void push3(int item)
{
	if(isfull3()!=0)
	{
	   top3++;
	   stack3[top3]=item;
    }
}
int pop3()
{
	int ele;
	if(isempty3()!=0)
	{
		ele=stack3[top3];
		top3--;
		return ele;
	}
}
int isempty3()
{
	if(top3==2)
	{
	printf("stack is empty\n");
	return 0;
    }
    else
    return 1;
}
void display3()
{
	int i;
	for(i=3;i<=top3;i++)
	printf("%d",stack3[i]);
}

int isfull3()
{
	if(top2==top3+1)
	{
		printf("stack is full\n");
		return 0;
	}
	else
	return 1;
}

