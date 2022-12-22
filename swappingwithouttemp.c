#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter a:\n");
    scanf("%lf",&a);
    printf("Enter b:\n");
    scanf("%lf",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping:\na:%.2lf\nb:%.2lf",a,b);
    getch();
return 0;
}
