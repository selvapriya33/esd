#include<stdio.h>
void main()
{
	int a, b, *ptr1, *ptr2, sum=0;
	printf("Enter the two number :");
        scanf("%d%d",&a,&b);  
        ptr1 = &a;
	ptr2 = &b;
	sum = *ptr1 + *ptr2;
	printf("Sum of the two number is %d",sum);
}
