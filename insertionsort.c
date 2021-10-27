#include<stdio.h>
void insertion_sort(int[],int);
int main()
{
	int n,arr[20],i;
	scanf("%d",&n);
	printf("Enter the array::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
}
void insertion_sort(int arr[],int n)
{
	int tmp,i,j;
	for(i=0;i<n;i++)
    {
    	tmp=arr[i];
    	j=i-1;
    	while(tmp<arr[j])
    	{
    		arr[j+1]=arr[j];
    		j--;
		}
		arr[j+1]=tmp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}