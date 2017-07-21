#include<stdio.h>
int main()
int a,i,flag=0;
printf("enter a positive integer");
scanf("%d",&a);
{
for(i=0;i<=a/2;++i)
{
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag=1)
printf("% is a prime number ",a);
else 
printf("%d is not a prime number",a);
return 0;
}

