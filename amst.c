#include<stdio.h>
void main()
{
int n,i,sum=0,temp;
printf("variable");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(temp==sum)
{
printf("amstrong");
}
else
{
printf("not amstrong");
}
}
