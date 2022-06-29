#include<stdio.h>
int sum(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n>9)
    {
        n=sum(n);
    }
    printf("%d",n);
}