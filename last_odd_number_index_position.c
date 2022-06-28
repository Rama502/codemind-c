#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--)
    {
        if(a[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
    }
}