#include<stdio.h>
void swap(int arr[],int largest,int i);
void max_heapify(int arr[],int i,int n);
void build_heap(int arr[],int n);
void main()
{
	int i,n,arr[20];
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("\nenter elements of array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
    build_heap(arr,n);
	printf("\n after building heap \n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void build_heap(int arr[],int n)
{
    int i;
	for(i=n/2;i>=1;i--)
	{
		max_heapify(arr,i,n);
	}
}
void max_heapify(int arr[],int i,int n)
{
	int l,r,largest;
	l=2*i;
	r=2*i+1;
	if(l<=n && arr[i]<arr[l])
	{
		largest=l;
	}
	else
	{
		largest=i;
	}
	if(r<=n && arr[largest]<arr[r])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(arr,largest,i);
		max_heapify(arr,largest,n);
	}
}
void swap(int arr[],int largest,int i)
{
	int temp;
	temp=arr[largest];
	arr[largest]=arr[i];
	arr[i]=temp;

}
