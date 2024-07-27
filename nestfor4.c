//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main()
{
    int i,j;
    for(j=1 ; j<=5 ; j=j+1)
    {
        for(i=1 ; i<=j ; i=i+1)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}