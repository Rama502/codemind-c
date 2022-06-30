#include<stdio.h>
int main()
{
    int a,b,i,p,t,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int c=0,s=0;;
        t=i;
        while(t)
        {
            p=t%10;
            t=t/10;
            s++;
            if(p==0)
            {
                break;
            }
            else
            {
                if(i%p==0)
                {
                    c++;
                }
            }
        }
        //printf("%d ",s);
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}