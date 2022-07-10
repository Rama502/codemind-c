#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],i,j,k,count=0,dup[50],num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        dup[i]=-1;
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<num;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                num--;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
}