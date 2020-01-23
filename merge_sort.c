#include<stdio.h>
//int arr[30],arr1[30];
void merge(int arr[],int p,int q,int r)
{
	int n1,n2,l_arr[20],r_arr[20],i=0,j=0,k=0;
	n1=q-p+1;
	n2=r-q;
	j=1;
	for(i=p;i<=q;i++)
	{
		l_arr[j]=arr[i];
	    j++;
	}
	l_arr[j]=1000;
	j=1;
	for(i=q+1;i<=r;i++)
	{
		r_arr[j]=arr[i];
		j++;
	}
	i=1;j=1;
	r_arr[j]=1000;
    for(k=1;k<=(n1+n2);k++)
    {
        if(l_arr[i]<r_arr[j])
        {
            arr[k]=l_arr[i];
            i++;
        }
        if(l_arr[i]>r_arr[j])
        {
            arr[k]=r_arr[j];
            j++;
        }
        if(l_arr[i]==r_arr[j])
        {
            arr[k]=r_arr[j];
            arr[k]=r_arr[j];
            j++;
            i++;
        }
    }
}

void merge_sort(int arr[],int p,int r)
{
   int q,i;
   if(p<r)
   {
   	q=((p+r)/2);
   	merge_sort(arr,p,q);
   	merge_sort(arr,(q+1),r);
    printf("\n %d \t%d\t %d",p,q,r);
    merge(arr,p,q,r);
   for(i=p;i<=r;i++)
	{
		//printf("\n %d",arr[i]);
	}

   }


}
int main()

{
	int i,p,n,r,arr[20];
	printf("\nenter no of elemnets\n");
	scanf("%d",&n);
	printf("\n enter elements\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	  // printf("\n%d",arr[i]);
	}
    p=1;
	r=n;
     //printf("\n%d\t %d",p,r);
    merge_sort(arr,p,r);
   for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}

}
