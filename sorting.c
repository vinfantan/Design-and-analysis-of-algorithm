#include<stdio.h>
main()
{
	int a[10],m,res,i;
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++)
	{ 
	    scanf("%d",&a[i]);
	   
	}
	
	do{
		res=0;
	for(i=0;i<9;i++)
	{ 
	   if(a[i]>a[i+1])
	   {
	    m=a[i+1];
        a[i+1]=a[i];
		a[i]=m;	     
	    res=res+1;
	}
	
   	}
		 
	}while(res!=0);
  printf("\n after sorting\n");
for(i=0;i<10;i++)
	{ 
	    printf("\t%d",a[i]);
	}
	
getch();
}
  
