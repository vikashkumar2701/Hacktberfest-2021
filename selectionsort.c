#include<stdio.h>
void selection_sort(int[],int);
int main()
{
	int n,arr[20],i;
	scanf("%d",&n);
	printf("Enter the array::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
}
void selection_sort(int arr[],int n)
{
	int i,j,pos,temp,small,count=0;
	for(i=0;i<n;i++)
	{
		small=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<small)
			{
				pos=j;
				small=arr[j];
				count++;
		    }
	    }
			    temp=arr[pos];
			    arr[pos]=arr[i];
			    arr[i]=temp;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("count=%d",count);
}