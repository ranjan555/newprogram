#include<stdio.h>
#include<conio.h>
void main()
{
int i,max,min,n;
int a[10];
  printf("Enter the size of array\n");
  scanf("%d",& n);
  printf("Enter the array element\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",& a[i]);
    }
   max = a[0];
   min =a[0];

   for(i=1;i<n;i++)
   {
     if(a[i]>max)
   {
   max=a[i];
   }
   if(a[i]<min)
   {
   min=a[i];
   }
  }
    printf("Maximum Element=%d\n",max);
    printf("Minimum Element=%d\n",min);
    getch();
 }