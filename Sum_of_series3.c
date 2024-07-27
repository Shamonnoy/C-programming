#include<stdio.h>
int main()
{
    float a=0;
    for(int i=2 ; i<=5 ; i++)
    {
        a=a+(1/(float)i);
    }
    printf("%f",a);
}