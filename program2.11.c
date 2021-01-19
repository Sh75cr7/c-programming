#include<stdio.h>
int main()
{
    double a, b, sum;
    printf("enter the value\n");
    scanf("%lf",&a);
    printf("enter the second value\n");
    scanf("%lf",&b);
    sum=a+b;
    printf("the sum is=%.3lf", sum);
    return 0;
}
