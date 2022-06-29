#include<stdio.h>
int main()
{
    int n,rev,r;
    scanf("%d",&n);
    rev=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("%d",rev);
}