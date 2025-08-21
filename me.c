#include <stdio.h>
void sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int arr[]={10,20,11,87,39,19,37};
	int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    printf("After sorted \n");
    printarray(arr,n);
}
