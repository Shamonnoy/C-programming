#include<stdio.h>
int main()
{
    int n,n1,rem,sum=0;
    printf("enter a 3 digit num:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(n1==sum)
    {
        printf("\nArmstrong number");
    }
    else
    {
        printf("\nNot Armstrong number");
    }
    return 0;
}