#include<stdio.h>
int main()
{
    int n,a[100],r,i,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        while(a[i])
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            rev=rev*10+r;
        }
        printf("%d ",rev);
    }
}