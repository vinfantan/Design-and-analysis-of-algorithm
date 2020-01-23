#include<stdio.h>
void swap(int arr[],int largest,int i);
void max_heapify(int arr[],int i,int n);
void build_heap(int arr[],int n);
void heap_sort(int arr[],int n);
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
    printf("\n\n your entered array is \n");
    for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
    
	build_heap(arr,n);
    
	printf("\n\n after building MAX_HEAP \n\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	heap_sort(arr,n);
	printf("\n\n\nafter sorting array by max_heap_sort\n\n");
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
void heap_sort(int arr[],int n)
{
	int i;
	for(i=n;i>=2;i--)
	{
	swap(arr,1,n);
    n=n-1;
    max_heapify(arr,1,n);	
	}
	
}
