#include<stdio.h>
int main()
{
    int a=0,i;
    int x=1;
    for(i=1 ; i<=5 ; i=i+1)
    {
        a=a+(x*(x+1));
        x=x+2;
    }
    printf("%d",a);
    return 0;
}