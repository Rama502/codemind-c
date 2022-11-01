#include<stdio.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag!=1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}