#include<stdio.h>
int main()
{
    int s,i;
    s=0;
    for(i=1 ; i<=5 ; i=i+1)
    {
        if(i%2==0)
            s=s-i;
        else
            s=s+i;
    }
    printf("%d",s);
    return 0;
}