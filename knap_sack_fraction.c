
#include<stdio.h>
//void sort(int arr[2][],int n);

void sort(float arr[][2],int n)
{
    int i,s,t;
    float temp;
    do{
        s=0;
        for(i=0;i<n-1;i++)
        {
           if(arr[i][0]<arr[i+1][0])
           {
              temp=arr[i][0];
              arr[i][0]=arr[i+1][0];
              arr[i+1][0]=temp;

              t=arr[i][1];
              arr[i][1]=arr[i+1][1];
              arr[i+1][1]=t;
              s++;
           }
        }
    }while(s!=0);

}
void main()
{
   int objects[20],w,k,i,n,j,selected_weight[20];
    float max_pro,pro_unit[10][2],pro[20],weight[20];
   printf("\nenter capacity of bag\n");
   scanf("%d",&w);
   printf("\nenter no of objects\n");
   scanf("%d",&n);
   printf("\nenter profits of objects\n");
   for(i=0;i<n;i++)
   {
       scanf("%f",&pro[i]);
   }
   printf("\nenter weights of objects\n");
   for(i=0;i<n;i++)
   {
       scanf("%f",&weight[i]);
   }
   for(i=0;i<n;i++)
   {
       pro_unit[i][0]=pro[i]/weight[i];
       pro_unit[i][1]=i;
   }
      sort(pro_unit,n);

   k=0;
   max_pro=0;
   for(i=0;i<n;i++)
   {
       j=(int)pro_unit[i][1];
       if(w>0 && weight[j]<=w)
       {
           w=w-weight[j];
           objects[k]=j;
           max_pro+=pro[j];
           selected_weight[k]=weight[j];
           k++;
       }
       else{
        goto jump;
       }
   }
   jump:
   if(w>0)
   {
       max_pro+=w*pro_unit[i][0];
       selected_weight[k]=w;
       w=0;
       objects[k]=j;
       k++;
   }
   printf("\n selecetd objects \t weight\n");
   for(i=0;i<k;i++)
   {
       printf("\t %d\t\t %d\n",objects[i]+1,selected_weight[i]);
   }
   printf("\nmaximum profit== %f\n",max_pro);

}

