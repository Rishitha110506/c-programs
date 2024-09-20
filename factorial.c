#include<stdio.h>
void main()
{
int n;
int fact=1;
printf("Enter the number:");
scanf("%d", &n);
for(int i=n;i>=1;i--)
{
fact=fact*i;
}
printf("\n The factorial of %d is %d",n,fact);
}