//1
//1 3
//1 3 5
//1 3 5 7
#include<stdio.h>
int main()
{
    int i,j;
    for(j=1 ; j<=9 ; j=j+2)
    {
        for(i=1 ; i<=j ; i=i+2)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}