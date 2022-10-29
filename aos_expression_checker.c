#include<stdio.h>
#define max 20
void parentheses_checker(char a[]);
char check(char ch);
void push(char item);
char pop();
int isempty();
int isfull();
char stack[max];
int top=-1;
int main()
{
	int n,i;
	char a[20];
	printf("enter the expression\n");
	scanf("%s",a);
	parentheses_checker(a);
	return 0;
}
void parentheses_checker(char a[])
{
	int i,f=0;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]==')'||a[i]=='}'||a[i]==']')&&top==-1)
		{
		f=1;
		break;
	    }
		else
		if(a[i]==')'||a[i]=='}'||a[i]==']')
		{
			if(pop()!=check(a[i]))
			{
			f=1;
			break;
		    }	
		}
		else
		if(a[i]=='('||a[i]=='{'||a[i]=='[')
		push(a[i]);
	}
	if(f==0&&top==-1)
	printf("expression is valid\n");
	else
	printf("exp is not valid");
}
char check(char ch)
{
	switch(ch)
	{
		case ')': return '(';
		break;
		case '}': return '{';
		break;
		break;
		case ']': return '[';
		break; 
	}
}
void push(char item)
{
	if(isfull()!=0)
	{
	   top++;
	   stack[top]=item;
    }
}
char pop()
{
	int ele;
	if(isempty()!=0)
	{
		ele=stack[top];
		top--;
	}
	return ele;
}
int isempty()
{
	if(top==-1)
	{
	printf("stack is empty\n");
	return 0;
    }
    else
    return 1;
}
int isfull()
{
	if(top==max-1)
	{
		printf("stack is full\n");
		return 0;
	}
	else
	return 1;
}

