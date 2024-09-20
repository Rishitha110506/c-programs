#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);
printf("Enter the value of c:");
scanf("%d", &c);
if(a>=b && a>=c)
{
printf("%d is maximum \n", a);
}
else if(b>=a && b>=c)
{
printf("%d is maximum \n", b);
}
else if(c>=b && c>=a)
{
printf("%d is maximum \n", c);
}
else
{
printf("all three numbers are equal");
}
}