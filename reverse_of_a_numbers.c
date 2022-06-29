#include<stdio.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("%d",rev);
}