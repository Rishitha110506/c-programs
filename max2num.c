#include<stdio.h>
void main()
{
int a,b;
printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);
if(a>b)
{
printf("%d is maximum \n", a);
}
else if(a<b)
{
printf("%d is maximum \n", b);
}
else
{
printf(" both a and b are equal \n");
}
}