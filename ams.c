#include <stdio.h>
#include <math.h>

void main()
{
    int low, high, i, a, b, rem, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        a = i;
        b = i;

     
        while (a != 0)
        {
            a /= 10;
            ++n;
        }

     
        while (b != 0)
        {
            rem= b % 10;
            result += pow(rem, n);
            b /= 10;
        }

     
        if (result == i) {
            printf("%d ", i);
        n = 0;
        result = 0;

    }

}
