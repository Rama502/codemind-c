#include<stdio.h>
int main()
{
    int n,a[100],i,j,c,d=0;
    float s=0,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    a[j]=-1;
                    c++;
                }
            }
        }
        if(c==a[i] && a[j]!=-1)
        {
            d++;
            s=s+a[i];
        }
    }
    sum=s/d;
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",sum);
    }
}