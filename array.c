#include<stdio.h>
void main()
{
int arr[10];
int a,b,c,d,e;
printf("Enter the data:");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
arr[0]=a;
arr[1]=b;
arr[2]=c;
arr[3]=d;
arr[4]=e;
int length =sizeof(arr)/sizeof(arr[0]);
printf("Array is:");
int sum=0;
for(int i=0; i<length;i++)
{
sum=sum+arr[i];
printf("%d\t",arr[i]);
}
arr[5]=25;
printf("%d\t",arr[5]);
printf("\nsum = %d",sum);

}
