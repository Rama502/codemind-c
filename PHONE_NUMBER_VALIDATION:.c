#include<stdio.h>
int main()
{
    long int mno,first;
    int cnt;
    scanf("%ld",&mno);
    first=mno;
    while(first>=10)
    first=first/10;
    while(mno!=0)
    {
        mno=mno/10;
        cnt++;
    }
    if(first==0 || cnt!=10)
    printf("Invalid");
    else
    printf("Valid");
    return 0;
}