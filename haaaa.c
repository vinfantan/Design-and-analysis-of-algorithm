#include<stdio.h>
int arr[30];
void merge(int p,int q,int r)
{
	int n1,n2,l_arr[20],r_arr[20],i=0,j=0,k=0;
	n1=q-p;
	n2=r-q-1;
	j=0;
	for(i=p;i<=q;i++)
	{
		l_arr[j]=arr[i];
	    j++;
	}
	j=0;
	for(i=q+1;i<=r;i++)
	{
		r_arr[j]=arr[i];
		j++;
	}
	i=0;j=0;
	while((i<=n1) && (j<=n2))
	{
		if(l_arr[i]<r_arr[j])
		{
			arr[k]=l_arr[i];
			i++;
			k++;
		}
		else if(l_arr[i]>r_arr[j])
		{
			arr[k]=r_arr[j];
			j++;
			k++;
		}
		else if(l_arr[i]==r_arr[j])
		{
			arr[k]=l_arr[i];
			i++; k++;
			arr[k]=r_arr[j];
			j++; k++;
		}
	}
	while(i<=n1)
	{
		arr[k]=l_arr[i];
		k++;
		i++;
	}
	while(j<=n2)
	{
		arr[k]=r_arr[j];
		j++;
		k++;
	}

}

void merge_sort(int p,int r)
{
	int q;
   if(p<r)
   {
   	q=((p+r)/2);
   	merge_sort(p,q);
   	merge_sort(q+1,r);
     merge(p,q,r);
   }
   else{
         //printf("\n %d",arr[p]);
    //merge(arr,p,q,r);
   }


}
void main()

{
	int i,p,n,r;
	printf("\nenter no of elemnets\n");
	scanf("%d",&n);
	printf("\n enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	  // printf("\n%d",arr[i]);
	}
    p=0;
	r=n-1;
     //printf("\n%d\t %d",p,r);
    merge_sort(p,r);
   for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}

}
