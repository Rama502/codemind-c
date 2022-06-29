#include<stdio.h>
int main()
{
    int n,p,rev1=0,rev2=0,s,q,r;
    scanf("%d",&n);
    p=n*n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev1=rev1*10+r;
    }
    q=rev1*rev1;
    while(q)
    {
        s=q%10;
        q=q/10;
        rev2=rev2*10+s;
    }
    if(p==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}