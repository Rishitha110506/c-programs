#include<stdio.h>
void main()
{
int num;
printf("Enter any number:");
scanf("%d", &num);
if(num>0)
{
printf(" the num is positive");
}
else if(num<0)
{
printf("the num is negative");
}
else
{
printf("the number is zero");
}
}