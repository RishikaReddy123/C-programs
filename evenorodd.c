#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even");
    else
        printf("Odd");
getch();
return 0;
}

