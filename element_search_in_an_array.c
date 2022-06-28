#include<stdio.h>
int main()
{
    int n,a[100],i,flag=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
       if(a[i]==p)
       {
           flag=1;
       }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}