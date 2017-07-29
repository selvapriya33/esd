#include<stdio.h>
void main()
{
int s,w;
int *a,*b,c;
printf("Values");
scanf("%d%d",&s,&w);
a=&s;
b=&w;
c=a+b;
printf("%d",c);
}
