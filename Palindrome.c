#include<stdio.h>
int main()
{
    int n,r,rev=0,ori;
    scanf("%d",&n);
    ori=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==ori)
    printf("True");
    else
    printf("False");
}