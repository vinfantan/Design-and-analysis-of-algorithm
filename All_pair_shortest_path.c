#include<stdio.h>
int min(int a0[][20],int i,int j,int k);
void main()
{
    int i,j,k,a0[20][20],n;
  printf("enter no of vertex\n");
  scanf("%d",&n);
  printf("\nenter A0 matrix ( enter 10000 where infinity have to take)\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
      scanf("%d",&a0[i][j]);
  }
  for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
  {
      a0[i][j]=min(a0,i,j,k);
  }
  printf("\n all pair of shortest path matrix is==\n\n");
  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=n;j++)
  {
     printf("%d\t",a0[i][j]);
  }
  }

}
int min(int a0[][20],int i,int j,int k)
{
    int sum;
    sum=a0[i][k]+a0[k][j];
    if(a0[i][j]>sum)
    {
        return sum;
    }
    else
    {
        return a0[i][j];
    }
}
