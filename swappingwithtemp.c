#include<stdio.h>
int main()
{

    double a,b,temp;
    printf("Enter a:\n");
    scanf("%lf",&a);
    printf("Enter b:\n");
    scanf("%lf",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping:\na=%.2lf\nb=%.2lf\n",a,b);
    getch();
return 0;

}
