#include<stdio.h>
void main()
{
int a,i,sum=0; // Find the sum of the first N natural number.
printf("Enter the value of N:");
scanf("%d",&a);
for(i=1;i<=a;i++)
  sum=sum+i;
printf("The sum of first N natural number is %d",sum);
getch();
}
