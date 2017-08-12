#include<stdio.h>
void main()
{
int i,n,flag=0;
printf("value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
flag++;
}
if(flag==2)
{
printf("prime");
}
else
{
printf("not a prime ");
}
}
