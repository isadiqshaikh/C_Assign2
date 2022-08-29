#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("Updated number is %d",a);
}
