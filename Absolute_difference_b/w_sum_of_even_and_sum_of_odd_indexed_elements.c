#include<stdio.h>
int main()
{
    int n,a[100],i,sum1=0,sum2=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1+=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum2+=a[i];
        }
    }
    p=sum1-sum2;
    printf("%d",p);
}