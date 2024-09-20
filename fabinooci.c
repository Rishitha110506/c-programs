#include<stdio.h>
void main()
{
int a=0,b=1;
int n, sum=0;
printf("enter the value of n:");
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(int i=0;i<n;i++)
{
sum=a+b;
printf("%d\n",sum);
a=b;
b=sum;
}
}