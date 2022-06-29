#include<stdio.h>
int main()
{
    int n,r,max=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        if(max<r)
           max=r;
    }
    printf("%d",max);
}