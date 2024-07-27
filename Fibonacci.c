/*
#include <stdio.h>
int main()
{
    int a=0,b=1,i,c;
    printf("%d",a);
    printf("%d",b);
    for(i=1;i<=6;i=i+1)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
}
*/
#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++)
    {
        if(i<2)
        {
            printf("%d, ",i);
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d, ",c);
        }
    }
}
int main()
{
    int n;
    printf("\nEnter terms: ");
    scanf("%d",&n);
    fib(n);
    return 1;
}