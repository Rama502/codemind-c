#include<stdio.h>
void factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d
",f);
}
int main()
{
    int t,i,f,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        factorial(a[i]);
    }
}