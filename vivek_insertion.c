#include<stdio.h>
main()
{
	int i,a[20],n,key,j;
	printf("\n enter no of elements to be sorted\n");
	scanf("%d",&n);
    printf("\n enter elements\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
    for(i=1;i<n;i++)
    {
    	key=a[i];
    	j=i;
    	while(key<a[j-1]&&j>0 )
	   {
	   	  a[j]=a[j-1];
	   	  a[j-1]=key;
	   	 j--;
	   }
	  
	}
  
   for(i=0;i<n;i++)
   {
   	printf("\n %d",a[i]);
   }

}
