#include<stdio.h>
int main()
{

    double a,b,c;
    printf("Enter two integers: ");
    scanf("%lf%lf",&a,&b);
    c=a*b;
    printf("Product=%.2lf",c);
    getch();
return 0;
}
