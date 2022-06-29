#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n==(i*(i+1)))
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}