#include<stdio.h>
int main()
{
    int n,a[100],r,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            flag++;
        }
    }
    if(flag==n-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}