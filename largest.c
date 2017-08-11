include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( a>=b && a>=c )
        printf("%d is the largest number.", n1);

    if( b>=a && b>=c )
        printf("%d is the largest number.", n2);

    if( c>=a && c>=b )
        printf("%d is the largest number.", n3);

   
}
