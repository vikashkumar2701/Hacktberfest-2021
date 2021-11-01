#include<ctype.h>
#include<stdio.h>
int pr (char);

int
main () 
{
  
int j = 0, top = -1, t = -1, i;
  
char e[30], stack[30], temp[30], op[30], ch, item;
  
printf ("enter the expression-->");
  
scanf ("%s", e);
  
for (i = 0; e[i] != '\0'; i++)
    
    {
      
ch = e[i];
      
if (isalpha (ch))
	
	{
	  
temp[j++] = ch;
	
}
      
      else
	
	{
	  
if (top > -1)
	    
	    {
	      
if (pr (op[top]) <= pr (ch))
		
		{
		  
item = op[top];
		  
op[top++] = ch;
		  
op[top] = item;
		
}
	  op[++top]=ch;
}
	  
	  else
	    
	    {
	      
op[++top] = ch;
	    
}
	
}
    
}
  
i = 0;
  
while (j != 0)
    
    {
      
stack[++t] = temp[i++];
      
j--;
      
if (top > -1)
	
	{
	  
stack[++t] = op[top--];
	  
printf ("op=%c", stack[t]);
	
}
    
}
  
printf ("infix is=%s", stack);

}


int
pr (char ch) 
{
  
if (ch == '^')
    
return 11;
  
  else if (ch == '*' || ch == '/')
    
return 9;
  
  else
    
return 7;

}

