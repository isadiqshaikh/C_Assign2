#include<stdio.h>
int main()
{
    int x,q,r;
    printf("Enter three digit number");
    scanf("%d",&x);
    q=x/10;
    r=x%10;
    x=r*100 +q;
    printf("%d",x);
    return 0;
}
