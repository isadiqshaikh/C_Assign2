#include<stdio.h>
int main()
{
    int x;
    printf("Enter 3 digit number");
    scanf("%d",&x);
    printf("The last digit of the number is %d",x%10);
    return 0;
}
