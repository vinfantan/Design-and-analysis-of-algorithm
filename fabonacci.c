#include<stdio.h>
int fabonacci(int n);
int table[20],on,empty=0;
void main()
{
	int n,result;
	char ch;
	printf("calculate fabonacci\n\n");
	do{
		printf("enter n\n");
		scanf("%d",&n);
		on=n;
		result=fabonacci(n);
		
		printf("\nresult ==  %d\n",result);
        printf("\nenter y if calculate again \n");
        scanf("%ch",&ch);
        
	}while((ch!="y")||(ch!="Y"));
}

int fabonacci(int n)
{
	int ram;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(empty!=0 && empty>=n)
	{
		ram=table[n];
		return ram;
		//empty=n;
	}
	table[n]=fabonacci(n-2)+fabonacci(n-1);
	empty=n;
	if(empty==on){
		ram=table[n];
		return ram;
	}
		
	
}
