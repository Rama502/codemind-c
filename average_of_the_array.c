#include<stdio.h>
int main()
{
    int n,a[100],i;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    float(avg=sum/n);
    printf("%.2f",avg);
}